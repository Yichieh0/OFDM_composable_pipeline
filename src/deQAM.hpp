/*
 * Copyright 2019 Xilinx, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.

*/
//================================== End Lic =================================================

#include "data_path.hpp"

//void QAM(hls::stream<int32_t>& in,hls::stream<T_in_int>& out);
void deQAM(hls::stream<ap_fixed<IN_WL,IN_IL>>& data_in_real, hls::stream<ap_fixed<IN_WL,IN_IL>>& data_in_imag, hls::stream<ap_uint<QAM_unsigned_bit>>& QAM_out, hls::stream<int>& para_str_in, hls::stream<int>& para_str_out);
//void fft_top(hls::stream<T_in_int> p_inData[SSR], hls::stream<T_out> p_outData[SSR]);
