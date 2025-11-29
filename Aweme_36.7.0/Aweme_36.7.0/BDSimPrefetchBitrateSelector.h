@class NSString;
@protocol BDSimPlayerBizConfiguring, BDSimVideoModel, BDSimBitrateSelectorResult;

@interface BDSimPrefetchBitrateSelector : NSObject <BDSimPrefetchBitrateSelectorImpl>

@property (retain, nonatomic) id<BDSimPlayerBizConfiguring> bizConfig;
@property (weak, nonatomic) id<BDSimVideoModel, BDSimBitrateSelectorResult> video;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awe_prefetchBSModel:(id)a0;
- (unsigned long long)awe_prefetchDASHVideoResolution;
- (id)awe_prefetchDashInfo;
- (id)awe_prefetchURLModel;
- (id)awe_prefetchBSModelWithAutoBitrateModel:(id)a0;
- (id)awe_prefetchBSModel;
- (id)awe_prefetchDynamicBSModel:(id)a0;
- (id)awe_prefetchDynamicAudioBSModel:(id)a0;
- (void)awe_checkAudioBSModelWithDash;
- (id)awe_prefetchBSModelWithAutoBitrateModel:(id)a0 needSave:(BOOL)a1 bandwidthFactor:(double)a2;
- (id)awe_prefetchDynamicBSModel:(id)a0 needSave:(BOOL)a1 bandwidthFactor:(double)a2;
- (id)awe_prefetchBSModelNeedSave:(BOOL)a0 bandwidthFactor:(double)a1;
- (id)awe_prefetchAudioBSModelWithAwemeModel:(id)a0;
- (id)__prefetchBSModelNeedSave:(BOOL)a0 bandwidthFactor:(double)a1;
- (id)__prefetchBSModelWithAwemeModel:(id)a0 needSave:(BOOL)a1 bandwidthFactor:(double)a2;
- (id)__prefetchBSModelWithAutoBitrateModel:(id)a0 needSave:(BOOL)a1 bandwidthFactor:(double)a2;
- (void)trackerPreloadBSInfo:(id)a0 filteredModels:(id)a1 bsModel:(id)a2;
- (id)awe_prefetchURLString;
- (id)awe_prefetchBSModel:(id)a0 needSave:(BOOL)a1 bandwidthFactor:(double)a2;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithConfig:(id)a0;

@end
