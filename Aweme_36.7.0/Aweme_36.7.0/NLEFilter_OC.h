@class NLESegmentFilter_OC;

@interface NLEFilter_OC : NLETimeSpaceNode_OC

@property (nonatomic) BOOL acc_isAudioFadeMuteFilter;
@property (nonatomic) BOOL isEditFilter;
@property (nonatomic) unsigned long long aek_filterType;
@property (nonatomic) long long aek_detailType;
@property (nonatomic) struct shared_ptr<cut::model::NLEFilter> { struct NLEFilter *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLESegmentFilter_OC *segmentFilter;

+ (id)filterFromMMAudioFilter:(id)a0 draftFolder:(id)a1;
+ (id)voiceChangerFilterFromEffectPath:(id)a0 draftFolder:(id)a1;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLEFilter> { struct NLEFilter *x0; struct __shared_weak_count *x1; })a0;
- (id)createNLESegmentFilterOC:(struct shared_ptr<cut::model::NLESegmentFilter> { struct NLESegmentFilter *x0; struct __shared_weak_count *x1; })a0;
- (id)mmAudioFilterFromCurrentFilter;
- (BOOL)isAudioFilter;
- (BOOL)isVoiceChangerFilter;
- (BOOL)isDSPFilter;
- (BOOL)isBalanceFilter;
- (BOOL)isAudioVolumeFilter;
- (BOOL)isAudioFadeFilter;
- (BOOL)isAudioDetectionFilter;
- (BOOL)isNLEFilterForMMAudioFilter:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
