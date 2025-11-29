@class NSNumber, NSArray;

@interface LipStickEffectAdapter : WeEffectBaseAdapter

@property (retain, nonatomic) NSNumber *alpha;
@property (retain, nonatomic) NSNumber *faceModel;
@property (retain, nonatomic) NSNumber *lipstickType;
@property (retain, nonatomic) NSArray *color;
@property (retain, nonatomic) NSNumber *mouthShape;

+ (id)weeffectType;

- (void)load;
- (void)onImageFetchDone:(BOOL)a0;
- (void)onJsonWriteDoneWithPath:(id)a0;
- (void).cxx_destruct;

@end
