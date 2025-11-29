@class NSString;

@interface ToygerFeatureManager : NSObject

@property (nonatomic) struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } feature;
@property (nonatomic) float currentFeatureScore;
@property (retain, nonatomic) NSString *version;

+ (void)saveTemplateFeature:(struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })a0 faceQuality:(float)a1 withsecKey:(id)a2 faceid:(id)a3 andVersion:(id)a4 toPath:(id)a5;
+ (id)generateTempDatawithFeature:(struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })a0 faceQuality:(float)a1 faceid:(id)a2 andVersion:(id)a3;

- (BOOL)loadFeaturewithseckey:(id)a0 faceid:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
