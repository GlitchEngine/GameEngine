#ifndef VECTOR2_HPP
#define VECTOR2_HPP

namespace Core
{
	struct Vector2 final
	{

	public:

		float x, y;

		Vector2();
		Vector2(float x, float y);
		~Vector2();

		float magnitude();
		float sqrMagnitude();
		Vector2 normal();
		Vector2 inverse();

		Vector2 operator + (const Vector2& right);
		Vector2& operator += (const Vector2& right);

		Vector2 operator - (const Vector2& right);
		Vector2& operator -= (const Vector2& right);

		Vector2 operator * (const Vector2& right);
		Vector2& operator *= (const Vector2& right);

		Vector2 operator * (const float& right);
		Vector2& operator *= (const float& right);

		Vector2 operator / (const Vector2& right);
		Vector2& operator /= (const Vector2& right);

		Vector2 operator / (const float& right);
		Vector2& operator /= (const float& right);

		bool operator == (const Vector2& right);
		bool operator != (const Vector2& right);

	};
}

#endif // !VECTOR2_HPP