@class XNetInferenceTensorDescription, XNetInferenceTensorShape, XNetInferenceTensorDataType, NSMutableData;

@interface XNetInferenceTensor : NSObject {
    struct shared_ptr<xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _tensor;
    NSMutableData *_data;
}

@property (readonly, nonatomic) XNetInferenceTensorDescription *description;
@property (readonly, nonatomic) XNetInferenceTensorDataType *dataType;
@property (readonly, nonatomic) XNetInferenceTensorShape *shape;

- (id)initWithUnderlying:(const void *)a0;
- (const void *)underlying;
- (id)initWithDescription:(id)a0;
- (id)initWithShape:(id)a0 dataType:(id)a1;
- (id)objectAtIndexedSubscript:(long long)a0;
- (id)objects;
- (void)setObjects:(id)a0;
- (BOOL)setDataWithBufferPtr:(const void *)a0 length:(unsigned int)a1;
- (void *)bufferPtr;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
