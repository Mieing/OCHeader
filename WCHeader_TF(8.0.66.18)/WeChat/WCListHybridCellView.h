@class UIView;

@interface WCListHybridCellView : WCListBaseCellView {
    UIView *_itemContainerView;
}

+ (double)calculateHeightWithGroup:(id)a0 groupItem:(id)a1 width:(double)a2 isFirstOneInsection:(BOOL)a3 isLastOneInSection:(BOOL)a4;

- (void)initView;
- (void)reloadItemContainerView;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)onClickEvent;
- (void)updateAccessibility;
- (void).cxx_destruct;

@end
