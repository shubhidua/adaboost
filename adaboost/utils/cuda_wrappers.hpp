#ifndef ADABOOST_UTILS_CUDA_WRAPPERS_HPP
#define ADABOOST_UTILS_CUDA_WRAPPERS_HPP

#include<cuda.h>
#include<cuda_runtime.h>

namespace adaboost
{
    namespace utils
    {
        namespace cuda
        {
            enum direction {HostToDevice, DeviceToHost};
            typedef cudaEvent_t cuda_event_t;

            void cuda_malloc(void** ptr, unsigned num_bytes);

            void cuda_memcpy
            (void* ptr_1, void* ptr_2, unsigned num_bytes, direction d);

            void cuda_event_create(cuda_event_t* event_ptr);

            void cuda_event_record(cuda_event_t event);

            void cuda_event_synchronize(cuda_event_t event);

            void cuda_free(void* ptr);

        } // namspace cuda
    } // namespace utils
} // namespace adaboost

#endif
