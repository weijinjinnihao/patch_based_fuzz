# for ubuntu20.04 only
# SVF-2.5
# LLVM-12
# z3 z3-4.8.8 / 4.12.0

jobs=4

LLVMHome="/home/bigdata/windranger_base_folder/llvm12_asan/llvm_12.0.0_asan_obj"
Z3Home="/home/bigdata/windranger_base_folder/wfuzz/z3.obj"

SVFHOME="/home/bigdata/windranger_base_folder/wfuzz/SVF_v2.5/SVF_V2.5_SRC"
export SVF_DIR=$SVFHOME
export LLVM_DIR=$LLVMHome
export Z3_DIR=$Z3Home
export PATH=$LLVM_DIR/bin:$PATH

echo "LLVM_DIR=$LLVM_DIR"
echo "Z3_DIR=$Z3_DIR"

PTAOBJTY="Debug"
Build=$PTAOBJTY'-build'

PTABIN=$SVF_DIR/$Build/bin
export PATH=$PTABIN:$PATH


echo "LLVM_DIR="$LLVM_DIR
echo "SVF_DIR="$SVF_DIR

mkdir bld
cd bld
cmake .. -DCMAKE_BUILD_TYPE=Debug