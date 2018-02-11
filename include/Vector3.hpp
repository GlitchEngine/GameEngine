#ifndef VECTOR3_HPP
#define VECTOR3_HPP

namespace Core
{
	struct Vector3 final
	{

	public:

		float x, y, z;

		Vector3();
		Vector3(float x, float y, float z);
		~Vector3();

		float magnitude();
		float sqrMagnitude();
		Vector3 normal();
		Vector3 inverse();

		Vector3 operator + (const Vector3& right);
		Vector3& operator += (const Vector3& right);

		Vector3 operator - (const Vector3& right);
		Vector3& operator -= (const Vector3& right);

		Vector3 operator * (const Vector3& right);
		Vector3& operator *= (const Vector3& right);

		Vector3 operator * (const float& right);
		Vector3& operator *= (const float& right);

		Vector3 operator / (const Vector3& right);
		Vector3& operator /= (const Vector3& right);

		Vector3 operator / (const float& right);
		Vector3& operator /= (const float& right);

		bool operator == (const Vector3& right);
		bool operator != (const Vector3& right);

	};
}

#endif // !VECTOR3_HPP