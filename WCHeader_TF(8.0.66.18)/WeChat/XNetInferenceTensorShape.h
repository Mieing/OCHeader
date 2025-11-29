@class NSArray;

@interface XNetInferenceTensorShape : NSObject {
    struct TensorShape { long long mSize; long long mData[8]; } _underlying;
}

@property (readonly, nonatomic) NSArray *data;
@property (readonly, nonatomic) long long dimension;
@property (readonly, nonatomic) long long length;

- (id)initWithUnderlying:(const void *)a0;
- (const void *)underlying;
- (id)initWithData:(id)a0;
- (id)objectAtIndexedSubscript:(long long)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(long long)a1;
- (id).cxx_construct;

@end
