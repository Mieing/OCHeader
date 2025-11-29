@class ComnModel, MLPredictionOptions, MLModelDescription, NSMutableDictionary, MLDictionaryFeatureProvider, NSError;

@interface IESMMProcessNN : NSObject {
    unsigned long long inputNum;
    unsigned long long outputNum;
    struct vector<std::shared_ptr<TensorInfo>, std::allocator<std::shared_ptr<TensorInfo>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<TensorInfo> *, std::allocator<std::shared_ptr<TensorInfo>>> { void *__value_; } __end_cap_; } inputDataArr;
    struct vector<std::shared_ptr<TensorInfo>, std::allocator<std::shared_ptr<TensorInfo>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<TensorInfo> *, std::allocator<std::shared_ptr<TensorInfo>>> { void *__value_; } __end_cap_; } outputDataArr;
    BOOL setOutput;
}

@property (retain, nonatomic) ComnModel *model;
@property (nonatomic) long long outputType;
@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (retain, nonatomic) MLPredictionOptions *options;
@property (retain, nonatomic) NSMutableDictionary *inFeatureDict;
@property (retain, nonatomic) NSMutableDictionary *outFeatureDict;
@property (retain, nonatomic) MLDictionaryFeatureProvider *outProvider;
@property (retain, nonatomic) NSError *error;

+ (struct vector<int, std::allocator<int>> { int *x0; int *x1; struct __compressed_pair<int *, std::allocator<int>> { int *x0; } x2; })GetTensorShapes:(id)a0;
+ (BOOL)checkIfiOS16Lib;
+ (int)loadModelWithContent:(id)a0 withName:(id)a1 withType:(void *)a2 completionHandler:(id /* block */)a3;
+ (int)loadModelWithURL:(id)a0 withName:(id)a1 withType:(void *)a2 completionHandler:(id /* block */)a3;
+ (int)selectVaildKeys:(id)a0 withName:(id)a1;

- (int)FindInputIndex:(const char *)a0;
- (long long)CopyBetweenPixelBuffers:(struct __CVBuffer { } *)a0 destPixelBuffer:(struct __CVBuffer { } *)a1;
- (int)FindOutputIndex:(const char *)a0;
- (int)GetOutputConfig:(void *)a0;
- (int)SetInputPixelBuffer:(const char *)a0 data:(void *)a1;
- (int)SetOutputPixelBuffer:(const char *)a0 data:(void *)a1;
- (int)GetInputConfig:(void *)a0;
- (int)SetOutputBufferArr:(const char *)a0 data:(void *)a1 format:(int)a2;
- (long long)CpuBufferPostProcess:(id)a0;
- (int)GetOutputBufferArr:(void *)a0;
- (int)Inference;
- (int)SetInputBufferArr:(struct vector<ByteCoreML::Tensor, std::allocator<ByteCoreML::Tensor>> { struct Tensor *x0; struct Tensor *x1; struct __compressed_pair<ByteCoreML::Tensor *, std::allocator<ByteCoreML::Tensor>> { struct Tensor *x0; } x2; })a0;
- (int)checkTensorType:(void *)a0;
- (id)doDictPredictionWithOptions:(id)a0 error:(id)a1;
- (long long)hwcTochwInputX:(int)a0 data:(void *)a1 dataType:(long long)a2 batch:(int)a3 height:(int)a4 width:(int)a5 channel:(int)a6;
- (id)initWithContent:(id)a0 withName:(id)a1 disableMLE5Engine:(BOOL)a2;
- (id)initWithURL:(id)a0 withName:(id)a1 disableMLE5Engine:(BOOL)a2;
- (long long)outPutPostPocess;
- (int)parseDescription:(void *)a0;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;

@end
