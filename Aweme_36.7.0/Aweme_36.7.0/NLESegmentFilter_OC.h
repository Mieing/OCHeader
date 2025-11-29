@class NSDictionary, NSString, NLEResourceNode_OC;

@interface NLESegmentFilter_OC : NLESegment_OC

@property (copy, nonatomic) NSDictionary *aek_noEffectFeatures;
@property (nonatomic) struct shared_ptr<cut::model::NLESegmentFilter> { struct NLESegmentFilter *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) float intensity;
@property (copy, nonatomic) NSString *filterName;
@property (copy, nonatomic) NLEResourceNode_OC *effectSDKFilter;
@property (nonatomic) long long positionType;

+ (id)audioFilterSegment;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentFilter> { struct NLESegmentFilter *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)isAudioFilterSegment;
- (BOOL)isAudioBalanceFilterSegment;
- (BOOL)isAudioVolumeFilterSegment;
- (BOOL)isAudioDSPFilterSegment;
- (BOOL)isAudioSamiDenoiseFilterSegment;
- (BOOL)isAudioMatrixFilterSegment;
- (BOOL)isAudioFadeFilterSegment;
- (void)setSaveInTemplate:(BOOL)a0;
- (BOOL)getSaveInTemplate;
- (id)getResNode;
- (void).cxx_destruct;
- (unsigned long long)getType;
- (id)init;

@end
