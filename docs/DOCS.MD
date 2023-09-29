# Documentation for ``<vectorium/vector3D.hpp>``

- ```cpp
  namespace Vectorium
  ```
  - ```cpp
      class Vector3D
      ```
      The Vector3D class.Public variable and methods that you can use are as follows:- 

      - ```cpp
        double i;
        double j;
        double k;
        ```
        Public variables of the class that can be accessed and modified
        
        ``i`` is the x component
        
        ``j`` is the y component
        
        ``k`` is the z component

      - ```cpp
          Vector3D(double i, double j, double k)
          ```
          Constructor for the class. Takes in the x, y and z components of the vector as arguments.
        
      - ```cpp
          Vector3D()
          ```
          Default constructor for the class. Initializes the vector to (0, 0, 0).  

      - ```cpp
          Vector3D(const Vector3D &other);
          Vector3D(Vector3D &&other);
          ```
          Copy constructor for the class. Takes in a vector as argument and initializes the vector to the vector passed as argument.
          
      - ```cpp
          Vector3D& operator=(const Vector3D &other);
          Vector3D &operator=(Vector3D &&other);
          ```
          Copy assignment operator for the class. Takes in a vector as argument and assigns the vector to the vector passed as argument.
      
      - ```cpp
          bool operator==(const Vector3D &other);
          ```
          Returns true if the vector *this is equal to the vector ``other``.
        
      - ```cpp
          bool operator!=(const Vector3D &other);
          ```
          Returns true if the vector *this is not equal to the vector ``other``.
          
      - ```cpp
          Vector3D operator+(Vector3D v)
          ```
          Returns the sum of the vector *this and the vector ``v``.

      - ```cpp
          Vector3D operator-(Vector3D v)
          ```
          Returns the difference of the vector *this and the vector ``v``.
        
      - ```cpp
          Vector3D operator*(double scalar)
          ```
          Returns the product of the vector *this and the scalar ``scalar``.

      - ```cpp
          Vector3D operator/(double scalar)
          ```
          Returns the division of the vector *this and the scalar ``scalar``.

      - ```cpp
          Vector3D& operator+=(const Vector3D &other);
          Vector3D& operator-=(const Vector3D &other);
          Vector3D& operator*=(double other);
          Vector3D& operator/=(double other);
          ```
          They have the usual meaning

      - ```cpp
          double dot(Vector3D v)
          ```
          Returns the dot product of the vector *this and the vector ``v``.

      - ```cpp
          Vector3D cross(Vector3D v)
          ```
          Returns the cross product of the vector *this and the vector ``v``.

      - ```cpp
          double dot(double v,double O)
          ```
          Returns the dot product of the vector *this and the vector ``v`` where the angle between them is ``O``.

      - ```cpp
          double cross(double v,double O)
          ```
          Returns the magnetude cross product of the vector *this and the vector ``v`` where the angle between them is ``O``.

      - ```cpp
          double mag()
          ```
          Returns the magnitude of the vector *this.
        
      - ```cpp
          double mag2()
          ```
          Returns the square of the magnitude of the vector *this.
        
      - ```cpp
          Vector3D unit()
          ```
          Returns the unit vector of the vector *this.

      - ```cpp
          double distance(Vector3D v)
          ```
          Returns the distance between the vector *this and the vector ``v``.
        
      - ```cpp
          double distance2(Vector3D v)
          ```
          Returns the square of the distance between the vector *this and the vector ``v``.  

      - ```cpp
          double angle(Vector3D v)
          ```
          Returns the angle between the vector *this and the vector ``v``.

      - ```cpp
          double angle(Vector3D v,Vector3D o)
          ```
          Returns the angle between the vector *this and the vector ``v`` when the centre is vector ``o``  

      - ```cpp
          Vector3D projection(Vector3D v)
          ```
          Returns the projection of the vector *this on the vector ``v``.

      - ```cpp
          Vector3D rejection(Vector3D v)
          ```
          Returns the rejection of the vector *this on the vector ``v``. 

      - ```cpp
          Vector3D rotatexy(double o)
          ```
          Returns the vector *this rotated by an angle ``o`` along xy plane in anti-clockwise direction

      - ```cpp
          Vector3D rotateyz(double o)
          ```
          Returns the vector *this rotated by an angle ``o`` along yz plane in anti-clockwise direction

      - ```cpp
          Vector3D rotatexz(double o)
          ```
          Returns the vector *this rotated by an angle ``o`` along xz plane in anti-clockwise direction
          
  - ```cpp
      Vector3D operator*(double a,const Vector3D &b);
      ```
      Returns the product of the scalar ``a`` and the vector ``b``.

  - ```cpp
       double dot(double a,double b,double o);
       ```
       Returns the dot product of the vector ``a`` and the vector ``b`` that make an angle ``o`` with each other.

  - ```cpp
       double cross(double a,double b,double o);
       ```
       Returns the magnitude of the cross product of the vector ``a`` and the vector ``b`` that make an angle ``o`` with each other.

  - ```cpp
       std::ostream &operator<<(std::ostream &os, const Vector3D &v);
       ```
       Prints the vector ``v`` to the output stream ``os``

  - ```cpp
       double PerlinNoise(Vector3D v);
       ```
       Returns the Perlin noise value of the vector ``v``.

  - ```cpp
       double PerlinNoise(Vector3D v,double s);
       ```
       Returns the Perlin noise value of the vector ``v`` using the seed ``s``.
       