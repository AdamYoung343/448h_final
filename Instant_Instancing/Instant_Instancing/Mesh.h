#pragma once

#include <string>

#define _USE_MATH_DEFINES
#include <OpenMesh/Core/IO/Options.hh>
#include <OpenMesh/Core/IO/MeshIO.hh>
#include <OpenMesh/Core/Mesh/TriMesh_ArrayKernelT.hh>

using namespace std;
using namespace OpenMesh;

typedef OpenMesh::TriMesh_ArrayKernelT<OpenMesh::DefaultTraits> TriMesh;

class Mesh
{
public:
	Mesh();
	~Mesh();
	void Write(string fileName);

protected:
	TriMesh mesh;
};

