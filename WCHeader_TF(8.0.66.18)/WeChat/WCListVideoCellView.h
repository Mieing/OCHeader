@class UIView;

@interface WCListVideoCellView : WCListBaseCellView {
    UIView *m_tailView;
}

+ (double)calculateHeightWithGroup:(id)a0 groupItem:(id)a1 width:(double)a2 isFirstOneInsection:(BOOL)a3 isLastOneInSection:(BOOL)a4;
+ (id)titleWithDataItem:(id)a0;
+ (id)trimDescWithDataItem:(id)a0;

- (double)maxLabelWidth;
- (double)tailViewHeight;
- (void)initTailView;
- (void)initView;
- (void)onClickEvent;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void).cxx_destruct;

@end
