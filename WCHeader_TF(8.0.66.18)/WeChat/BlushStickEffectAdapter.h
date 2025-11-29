@class NSNumber, NSString;

@interface BlushStickEffectAdapter : WeEffectBaseAdapter

@property (retain, nonatomic) NSNumber *alpha;
@property (retain, nonatomic) NSNumber *faceModel;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSNumber *blendMode;

+ (id)weeffectType;

- (void)load;
- (void)onImageFetchDone:(BOOL)a0;
- (void)onJsonWriteDoneWithPath:(id)a0;
- (void).cxx_destruct;

@end
