@protocol IESLiveHighlightContainerSyncDataStrategyProvider;

@interface IESLiveAnchorHighlightContainerSyncDataPlugin : IESLiveAnchorBizPlugin

@property (retain, nonatomic) id<IESLiveHighlightContainerSyncDataStrategyProvider> highlightStrategyProvider;

- (void).cxx_destruct;
- (void)setup;

@end
