@interface AWEDCFeedRefreshConfig : AWEDCFeedBaseConfig

@property (nonatomic) unsigned long long refreshStrategyType;
@property (nonatomic) BOOL refreshWithUnconsumedItems;
@property (copy, nonatomic) id /* block */ isValidUnconsumedItemsBlock;
@property (copy, nonatomic) id /* block */ triggerAnimationRefreshBlock;
@property (copy, nonatomic) id /* block */ triggerNetworkChangeRefreshBlock;
@property (copy, nonatomic) id /* block */ timeForOutOfTimeRefreshBlock;

- (void).cxx_destruct;

@end
