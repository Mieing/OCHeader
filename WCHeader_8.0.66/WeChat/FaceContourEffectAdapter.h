@class NSNumber, NSString;

@interface FaceContourEffectAdapter : WeEffectBaseAdapter

@property (retain, nonatomic) NSNumber *alpha;
@property (retain, nonatomic) NSNumber *faceModel;
@property (retain, nonatomic) NSString *path;

+ (id)weeffectType;

- (void)load;
- (void)onImageFetchDone:(BOOL)a0;
- (void)onJsonWriteDoneWithPath:(id)a0;
- (void).cxx_destruct;

@end
