@interface MMWebViewPlugin_ShrinkControl : MMWebViewPluginBase

@property (nonatomic) BOOL shouldHandleScrollEvent;
@property (nonatomic) double offsetYWhenDraggingBegin;
@property (nonatomic) double offsetYWhenLastDidScroll;
@property (nonatomic) struct CGSize { double width; double height; } lastWebScrollContentSize;
@property (nonatomic) unsigned int unTrackScrollingNum;
@property (nonatomic) BOOL isBottomBarShow;

- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)handleWebPageStateChanged:(struct CGSize { double x0; double x1; })a0;
- (void)handleWebScrollViewWillBeginDragging:(id)a0;
- (void)handleWebScrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; })a2;
- (void)handleWebScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)handleWebScrollViewWillBeginDecelerating:(id)a0;
- (void)handleWebScrollViewDidScroll:(id)a0;
- (void)handleWebScrollViewDidEndDecelerating:(id)a0;
- (void)handleWebScrollViewDidEndScrollingAnimation:(id)a0;
- (BOOL)isScrollViewExceedsTop:(id)a0;
- (BOOL)scrollViewShouldShrink:(id)a0;
- (BOOL)isScrollViewExceedsBottom:(id)a0;
- (double)shrinkRateWithCurrentScrollView:(id)a0;

@end
