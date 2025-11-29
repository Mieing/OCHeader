@class WCFinderLiveTabStreamPageScrollState;

@interface WCFinderLiveTabLiveStreamPageView : WCFinderTabPageView

@property (retain, nonatomic) WCFinderLiveTabStreamPageScrollState *scrollState;
@property (nonatomic) BOOL isSwitchingTab;
@property (nonatomic) BOOL enableScrollShowTabWhenNotPinned;

- (void)linkedContentOffsetYDidChange:(id)a0;
- (BOOL)isFlowBouncingBottom;
- (BOOL)handleTabScrollToggleWithCurrentOffset:(double)a0 delta:(double)a1;
- (double)calculateScrollThreshold;
- (void)forceTabVisible;
- (void)flowScrollToTop;
- (void)updateTabContainerPositionWithCurrentOffset:(double)a0 oldTabContainerBottom:(double)a1;
- (void)setIsTabVisible:(BOOL)a0;
- (BOOL)isTabVisible;
- (void)toggleTabVisible:(BOOL)a0 currentOffsetY:(double)a1 threshold:(double)a2;
- (void)updateContentTopInset;
- (void)resetScrollTracking;
- (void)onWillSwitchPageWithType:(unsigned long long)a0;
- (void)onDidSwitchPage;
- (void)reload;
- (void).cxx_destruct;

@end
