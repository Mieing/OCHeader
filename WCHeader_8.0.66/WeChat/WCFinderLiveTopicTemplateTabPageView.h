@interface WCFinderLiveTopicTemplateTabPageView : WCFinderTabPageView

@property (copy, nonatomic) id /* block */ onWillSwitchToIndex;

- (void)scrollToTop;
- (void)onWillSwitchPageWithType:(unsigned long long)a0;
- (void)preloadAllPages;
- (void).cxx_destruct;

@end
