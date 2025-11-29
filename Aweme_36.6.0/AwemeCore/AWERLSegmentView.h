@class NSString, UIScrollView, NSMutableArray, UIView;

@interface AWERLSegmentView : UIView <UIScrollViewDelegate, AWERLSegmentProtocol>

@property (nonatomic) double moreThan5MaxTable;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) NSMutableArray *itemModels;
@property (retain, nonatomic) NSMutableArray *itemViews;
@property (retain, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (nonatomic) BOOL ignoreProgressEvent;
@property (nonatomic) long long segmentStyle;
@property (nonatomic) long long selectedIndex;
@property (copy, nonatomic) id /* block */ itemBuilderBlock;
@property (retain, nonatomic) UIView *rightFixedView;
@property (copy, nonatomic) id /* block */ onSelectAgainBlock;
@property (nonatomic) double adaptFontScale;
@property (nonatomic) BOOL shouldShowIndicatorView;
@property (copy, nonatomic) id /* block */ onSelectFromOutsideBlock;
@property (copy, nonatomic) id /* block */ onSelectBlock;
@property (copy, nonatomic) id /* block */ shouldSelectBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemViewAtIndex:(long long)a0;
- (void)__setupUI;
- (void)__reloadData;
- (void)updateScrollProgress:(double)a0;
- (void)__layoutAllViews;
- (void)__updateItemSelectAction:(id)a0;
- (void)__onSelectItemView:(id)a0 atIndex:(long long)a1;
- (void)__resizeItemView:(id)a0 limitWidth:(double)a1 needSizeFit:(BOOL)a2;
- (void)__updateIndicatorToIndex:(long long)a0 animated:(BOOL)a1;
- (void)__updateContentOffsetFrameWhenScrollAnimated:(BOOL)a0;
- (void)__updateIndicator:(long long)a0 right:(long long)a1 percent:(double)a2;
- (BOOL)hasRedDotWhenSwitchToTabIndex:(long long)a0;
- (void)addRightFixedView:(id)a0;
- (void)removeRightFixedView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 segmentStyle:(long long)a1;
- (void)reloadWithTitles:(id)a0 selectedTitles:(id)a1 backupTitles:(id)a2;
- (void)reloadTitleWithIndex:(long long)a0 title:(id)a1 selectedTitle:(id)a2 backupTitle:(id)a3;
- (void)reloadWithBuilder:(id /* block */)a0;
- (void)updateSegmentItemAtIndex:(long long)a0 updater:(id /* block */)a1;
- (void)updateSegmentItemRedDotAtIndex:(long long)a0 isHidden:(BOOL)a1 contentString:(id)a2;
- (void)removeIndex:(long long)a0 animated:(BOOL)a1 completed:(id /* block */)a2;
- (void)scrollToVisibleIndex:(long long)a0 animated:(BOOL)a1 completed:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)itemsCount;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForButtonAtIndex:(long long)a0;
- (void)setSelectedIndex:(long long)a0 animated:(BOOL)a1;

@end
