@class XNetInferenceTensorDataType, XNetInferenceTensorShape;

@interface XNetInferenceTensorDescription : NSObject {
    struct TensorDesc { int dataKind; struct TensorShape { long long mSize; long long mData[8]; } logicShape; } _underlying;
}

@property (readonly, nonatomic) XNetInferenceTensorShape *shape;
@property (readonly, nonatomic) XNetInferenceTensorDataType *dataType;
@property (readonly, nonatomic) long long stride;

- (id)initWithUnderlying:(const void *)a0;
- (const void *)underlying;
- (id)initWithShape:(id)a0 dataType:(id)a1;
- (id).cxx_construct;

@end
