#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int gcd(int a, int b)
{
	int r = a % b;
	if (r == 0)
	{
		return b;
	}
	else 
	{
		return gcd(b,r);
	}
}

TEST_CASE("describe_gcd","[gcd]")
{
	REQUIRE(gcd(2,4) == 2);
	REQUIRE(gcd(6,9) == 3);
	REQUIRE(gcd(3,7) == 1);
}

///////////////////////////////////////////////////////
int checksum(int n)
{
	int s = 0;
	while(n > 0)
	{
		s = s + n%10;
		n = n/10;
	}
	return s;
}

TEST_CASE("describe_checksum","[checksum]")
{
	REQUIRE(checksum(3) == 3);
	REQUIRE(checksum(333) == 9);
	REQUIRE(checksum(30065) == 14);
}

///////////////////////////////////////////////////////
int sumMultiples()
{
	int s = 0;
	for (int i = 1; i <= 1000; ++i)
	{
		if ((i%3==0)||(i%5==0))
		{
			s = s + i;
		}
	}
	return s;
}

TEST_CASE("describe_sumMultiples","[sumMultiples]")
{
	REQUIRE(sumMultiples()==234168);
}

///////////////////////////////////////////////////////
float fract(float f)
{
	int i = f;
	float k = f-i;
	return k;
}

TEST_CASE("describe_fract","[fract]")
{
	REQUIRE(fract(1.333333)==Approx(0.333333));
	REQUIRE(fract(2.555555)==Approx(0.555555));
	REQUIRE(fract(3.1415926)==Approx(0.14159));
}

///////////////////////////////////////////////////////
float zylinder_s(int r, int h)
{
	float s = 2*3.14*h+2*3.14*r*r;
	return s;
}

float zylinder_v(int r, int h)
{
	float v = 2*3.14*r*r*h;
	return v;
}

TEST_CASE("describe_zylinder_s","[zylinder_s]")
{
	REQUIRE(zylinder_s(1,4)==Approx(31.4));
}

TEST_CASE("describe_zylinder_v","[zylinder_v]")
{
	REQUIRE(zylinder_v(1,4)==Approx(25.12));
}

///////////////////////////////////////////////////////
double mileToKilometer(double m)
{
	double km = m*1.60934;
	return km;
}

TEST_CASE("describe_mileToKilometer","[mileToKilometer]")
{
	REQUIRE(mileToKilometer(10)==16.0934);
}

///////////////////////////////////////////////////////
int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
