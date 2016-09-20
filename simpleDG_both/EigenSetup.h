//#define EIGEN_USE_MKL_ALL
//#define EIGEN_DEFAULT_DENSE_INDEX_TYPE MKL_INT
#include <Eigen/Dense>
#include <Eigen/SparseCore>

// setup relevant vector/matrix datatypes from Eigen

using namespace Eigen;
using Eigen::MatrixXd;
using Eigen::MatrixXi;
using Eigen::VectorXi;
using Eigen::SparseMatrix;
typedef SparseMatrix<double,Eigen::RowMajor> SpMatrix;
#if defined(MKL_ILP64)
#define sparse SparseMatrix<double,Eigen::RowMajor,long>
#else
#define sparse SparseMatrix<double,Eigen::RowMajor,int>
#endif

//typedef SparseMatrix<double,Eigen::RowMajor,long> SpMatrixL;
typedef  sparse SpMatrixL;
