#include "Vector3.hpp"
#include <math.h>


Core::Vector3::Vector3()
{
	x = y = 0.0f;
}


Core::Vector3::Vector3(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}


Core::Vector3::~Vector3()
{

}


float Core::Vector3::magnitude()
{
	return sqrt((x * x) + (y * y) + (z * z));
}


float Core::Vector3::sqrMagnitude()
{
	return (x * x) + (y * y) + (z * z);
}


Core::Vector3 Core::Vector3::normal()
{
	float _mag = sqrt((x * x) + (y * y) + (z * z));
	return *this / _mag;
}


Core::Vector3 Core::Vector3::inverse()
{
	return Vector3(-x, -y, -z);
}


Core::Vector3 Core::Vector3::operator + (const Vector3& right)
{
	return Vector3(x + right.x, y + right.y, z + right.z);
}


Core::Vector3& Core::Vector3::operator += (const Vector3& right)
{
	x += right.x;
	y += right.y;
	z += right.z;
	return *this;
}


Core::Vector3 Core::Vector3::operator - (const Vector3& right)
{
	return Vector3(x - right.x, y - right.y, z - right.z);
}


Core::Vector3& Core::Vector3::operator -= (const Vector3& right)
{
	x -= right.x;
	y -= right.y;
	z -= right.z;
	return *this;
}


Core::Vector3 Core::Vector3::operator * (const Vector3& right)
{
	return Vector3(x * right.x, y * right.y, z * right.z);
}


Core::Vector3& Core::Vector3::operator *= (const Vector3& right)
{
	x *= right.x;
	y *= right.y;
	z *= right.z;
	return *this;
}


Core::Vector3 Core::Vector3::operator * (const float& right)
{
	return Vector3(x * right, y * right, z * right);
}


Core::Vector3& Core::Vector3::operator *= (const float& right)
{
	x *= right;
	y *= right;
	z *= right;
	return *this;
}


Core::Vector3 Core::Vector3::operator / (const Vector3& right)
{
	return Vector3(x / right.x, y / right.y, z / right.z);
}


Core::Vector3& Core::Vector3::operator /= (const Vector3& right)
{
	x /= right.x;
	y /= right.y;
	z /= right.z;
	return *this;
}


Core::Vector3 Core::Vector3::operator / (const float& right)
{
	return Vector3(x / right, y / right, z / right);
}


Core::Vector3& Core::Vector3::operator /= (const float& right)
{
	x /= right;
	y /= right;
	z /= right;
	return *this;
}


bool Core::Vector3::operator == (const Vector3& right)
{
	return x == right.x && y == right.y && z == right.z;
}


bool Core::Vector3::operator != (const Vector3& right)
{
	return x != right.x || y != right.y || z != right.z;
}

