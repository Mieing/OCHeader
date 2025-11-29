@class NSString;
@protocol BDSimPlayerBizConfiguring, BDSimVideoModel, BDSimBitrateSelectorResult;

@interface BDSimBitrateSelector : NSObject <BDSimPlayBitrateSelectorImpl>

@property (retain, nonatomic) id<BDSimPlayerBizConfiguring> bizConfig;
@property (weak, nonatomic) id<BDSimVideoModel, BDSimBitrateSelectorResult> video;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awe_checkAudioBSModelWithDash;
- (id)awe_playBSModel;
- (id)bsModelForDASHVideoModel:(id)a0;
- (id)awe_playDynamicAudioBSModel:(id)a0;
- (id)awe_playDynamicBSModel:(id)a0 bandwidthFactor:(double)a1;
- (id)awe_playDynamicBSModel:(id)a0;
- (id)awe_playBSModelBandwidthFactor:(double)a0;
- (id)__playBSModelBandwidthFactor:(double)a0;
- (void)trackerPlayBSInfo:(id)a0 filteredModels:(id)a1 bsModel:(id)a2;
- (id)awe_prefetchAudioBSModelWithAwemeModel:(id)a0;
- (id)__playDynamicBSModel:(id)a0 bandwidthFactor:(double)a1;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithConfig:(id)a0;

@end
