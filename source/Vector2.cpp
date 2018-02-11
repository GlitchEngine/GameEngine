#include "Vector2.hpp"
#include <math.h>


Core::Vector2::Vector2()
{
	x = y = 0.0f;
}


Core::Vector2::Vector2(float x, float y)
{
	this->x = x;
	this->y = y;
}


Core::Vector2::~Vector2()
{

}


float Core::Vector2::magnitude()
{
	return sqrt((x * x) + (y * y));
}


float Core::Vector2::sqrMagnitude()
{
	return (x * x) + (y * y);
}


Core::Vector2 Core::Vector2::normal()
{
	float _mag = sqrt((x * x) + (y * y));
	return *this / _mag;
}


Core::Vector2 Core::Vector2::inverse()
{
	return Vector2(-x, -y);
}


Core::Vector2 Core::Vector2::operator + (const Vector2& right)
{
	return Vector2(x + right.x, y + right.y);
}


Core::Vector2& Core::Vector2::operator += (const Vector2& right)
{
	x += right.x;
	y += right.y;
	return *this;
}


Core::Vector2 Core::Vector2::operator - (const Vector2& right)
{
	return Vector2(x - right.x, y - right.y);
}


Core::Vector2& Core::Vector2::operator -= (const Vector2& right)
{
	x -= right.x;
	y -= right.y;
	return *this;
}


Core::Vector2 Core::Vector2::operator * (const Vector2& right)
{
	return Vector2(x * right.x, y * right.y);
}


Core::Vector2& Core::Vector2::operator *= (const Vector2& right)
{
	x *= right.x;
	y *= right.y;
	return *this;
}


Core::Vector2 Core::Vector2::operator * (const float& right)
{
	return Vector2(x * right, y * right);
}


Core::Vector2& Core::Vector2::operator *= (const float& right)
{
	x *= right;
	y *= right;
	return *this;
}


Core::Vector2 Core::Vector2::operator / (const Vector2& right)
{
	return Vector2(x / right.x, y / right.y);
}


Core::Vector2& Core::Vector2::operator /= (const Vector2& right)
{
	x /= right.x;
	y /= right.y;
	return *this;
}


Core::Vector2 Core::Vector2::operator / (const float& right)
{
	return Vector2(x / right, y / right);
}


Core::Vector2& Core::Vector2::operator /= (const float& right)
{
	x /= right;
	y /= right;
	return *this;
}


bool Core::Vector2::operator == (const Vector2& right)
{
	return x == right.x && y == right.y;
}


bool Core::Vector2::operator != (const Vector2& right)
{
	return x != right.x || y != right.y;
}

