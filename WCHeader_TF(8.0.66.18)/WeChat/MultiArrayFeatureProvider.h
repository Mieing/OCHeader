@class NSSet;

@interface MultiArrayFeatureProvider : NSObject <MLFeatureProvider> {
    const struct vector<TensorData, std::__1::allocator<TensorData> > { struct TensorData *x0; struct TensorData *x1; struct __compressed_pair<TensorData *, std::__1::allocator<TensorData> > { struct TensorData *x0; } x2; } *_inputs;
    NSSet *_featureNames;
}

@property (readonly, nonatomic) int coreMlVersion;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)initWithInputs:(const struct vector<TensorData, std::__1::allocator<TensorData> > { struct TensorData *x0; struct TensorData *x1; struct __compressed_pair<TensorData *, std::__1::allocator<TensorData> > { struct TensorData *x0; } x2; } *)a0 coreMlVersion:(int)a1;
- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;

@end
