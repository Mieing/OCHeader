@interface AWEMVChannelFirstRefreshCacheController : AWEDCFeedBaseController

- (void)exitContainerWithModel:(id)a0;
- (void)enterContainerWithModel:(id)a0;
- (void)containerBeforeViewDidLoad;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)handleWillResignActive;
- (void)preReadDiskCached;
- (id)modelsForSameKindSectionViewModel:(id)a0 count:(long long)a1;
- (id)lastRoundModelsForOneLargeEightSmallLayout:(id)a0;
- (id)deprecated_lastRoundModelsForOneLargeEightSmallLayout:(id)a0;
- (id)buildTheLatestARoundData;

@end
