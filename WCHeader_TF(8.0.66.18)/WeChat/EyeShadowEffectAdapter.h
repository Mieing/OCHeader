@class NSNumber, NSString;

@interface EyeShadowEffectAdapter : WeEffectBaseAdapter

@property (retain, nonatomic) NSNumber *alpha;
@property (retain, nonatomic) NSNumber *faceModel;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *shimmerPath;
@property (retain, nonatomic) NSNumber *shimmerType;
@property (retain, nonatomic) NSNumber *blendMode;

+ (id)weeffectType;

- (void)load;
- (void)onImageFetchDone:(BOOL)a0;
- (void)onJsonWriteDoneWithPath:(id)a0;
- (void).cxx_destruct;

@end
