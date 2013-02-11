#ifndef _QUDA_MILC_INVERTER_UTILITIES_H
#define _QUDA_MILC_INVERTER_UTILITIES_H

#include <cstdlib>
#include <quda.h>
#include <color_spinor_param.h>

namespace milc_interface {

  void setInvertParams(const int dim[4],
      QudaPrecision cpu_prec,
      QudaPrecision cuda_spinor_prec,
      QudaPrecision cuda_spinor_prec_sloppy,
      double mass, 
      double target_residual, 
      int maxiter,
      double reliable_delta,
      QudaParity parity,
      QudaVerbosity verbosity,
      QudaInvertParam *invertParam);


  void setInvertParams(const int dim[4],
      QudaPrecision cpu_prec,
      QudaPrecision cuda_spinor_prec,
      QudaPrecision cuda_spinor_prec_sloppy,
      int num_offset,
      const double offset[],
      const double target_residual_offset[],
      const double target_residual_hq_offset[],
      int maxiter,
      double reliable_delta,
      QudaParity parity,
      QudaVerbosity verbosity,
      QudaInvertParam *invertParam); 


  void setGaugeParams(const int dim[4],
      QudaPrecision cpu_prec,
      QudaPrecision cuda_prec,
      QudaPrecision cuda_prec_sloppy,
      QudaGaugeParam *gaugeParam);


  void setColorSpinorParams(const int dim[4],
      QudaPrecision precision,
      ColorSpinorParam* param);

  
  int getFatLinkPadding(const int dim[4]);

  size_t getColorVectorOffset(QudaParity local_parity, bool even_odd_exchange, int volume);

} // namespace milc_interface

#endif
