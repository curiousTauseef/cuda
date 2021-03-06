/*
 *  Copyright 2018 NVIDIA Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#pragma once

#include <thrust/detail/config.h>
#include <thrust/mr/new.h>
#include <thrust/mr/fancy_pointer_resource.h>

#include <thrust/system/tbb/pointer.h>

namespace thrust
{
namespace system
{
namespace tbb
{

namespace detail
{
    typedef thrust::mr::fancy_pointer_resource<
        thrust::mr::new_delete_resource,
        thrust::tbb::pointer<void>
    > native_resource;
}

typedef detail::native_resource memory_resource;
typedef detail::native_resource universal_memory_resource;
typedef detail::native_resource host_pinned_memory_resource;

}
}
}
