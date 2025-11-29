@class BDSimBitrateSelector, BDSimPrefetchBitrateSelector;
@protocol BDSimPlayModel, BDSimPlayerBizConfiguring;

@interface BDSimPlayStreamSelector : NSObject

@property (retain, nonatomic) id<BDSimPlayModel> model;
@property (copy, nonatomic) id /* block */ dataSourceHandler;
@property (retain, nonatomic) id<BDSimPlayerBizConfiguring> bizConfig;
@property (retain, nonatomic) BDSimBitrateSelector *bsSelector;
@property (retain, nonatomic) BDSimPrefetchBitrateSelector *prefetchBSSelector;
@property (nonatomic) unsigned long long memoryGearType;
@property (weak, nonatomic) id anchorTarget;

- (void)configDataSource:(id)a0;
- (void)updateBizConfig:(id)a0;
- (BOOL)isEnableDash:(id)a0;
- (id)awe_selectVideoBitRateModelWithModel:(id)a0 modelList:(id)a1 fromIndex:(long long)a2 nextIndex:(long long)a3;
- (id)selectVideoBSModelWithModel:(id)a0 modelList:(id)a1 fromIndex:(long long)a2;
- (id)bsModelForDASHVideoModel:(id)a0;
- (id)awe_playDynamicAudioBSModel:(id)a0;
- (double)bandWidthCalculatorResult;
- (id)selectPlayVideoBSModelWithCurrentBSModel:(id)a0 currentGearType:(unsigned long long)a1 enableSR:(BOOL)a2;
- (void)configSourceListHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithConfig:(id)a0;

@end
