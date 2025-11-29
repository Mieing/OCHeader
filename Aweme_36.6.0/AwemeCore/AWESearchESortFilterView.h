@class UIView, UIColor, AWEMerchandiseComponentCellTitle, NSString, AWESearchMerchandiseComponentDropDownExpandView, AWESearchMerchandiseFilterExpandView, AWESearchMerchandiseComponentDropDownDefaultSelectExpandView;

@interface AWESearchESortFilterView : AWEMerchandiseComponentView <AWEMerchandiseComponentViewDelegate, AWESearchMerchandiseComponentDropDownDefaultSelectExpandViewDelegate, AWESearchMerchandiseComponentDropDownExpandViewDelegate>

@property (retain, nonatomic) AWESearchMerchandiseComponentDropDownDefaultSelectExpandView *defaultSelectExpandView;
@property (retain, nonatomic) AWESearchMerchandiseComponentDropDownExpandView *dropDownExpandView;
@property (retain, nonatomic) AWESearchMerchandiseFilterExpandView *filterExpandView;
@property (retain, nonatomic) UIView *filterBlankView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) double ceilingViewInitialOffsetY;
@property (weak, nonatomic) AWEMerchandiseComponentCellTitle *titleComponentCell;
@property (copy, nonatomic) id /* block */ containerViewBlock;
@property (copy, nonatomic) id /* block */ interactiveStateChanged;
@property (nonatomic) BOOL showTitleClose;
@property (copy, nonatomic) id /* block */ closeButtonAction;
@property (retain, nonatomic) UIColor *itemViewBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)relayoutSubViews;
- (void)hideSelectBoard;
- (void)configWithModel:(id)a0 filterManager:(id)a1;
- (void)componentView:(id)a0 itemView:(id)a1 didSelectItemWithFilterComponentModel:(id)a2;
- (BOOL)componentView:(id)a0 isSelectingWithItemModel:(id)a1;
- (void)filterBlankViewTouch;
- (void)dropDownExpandView:(id)a0 getLastestResultsWithModel:(id)a1 selectItems:(id)a2 cancelSelectItems:(id)a3;
- (void)dropDownDefaultSelectExpandView:(id)a0 didSelectItemAtIndexPath:(id)a1 filterComponentModel:(id)a2;
- (void)endRequestWithEmptyFlag:(BOOL)a0;
- (void)addRectCornerWithRadius:(double)a0;
- (void)pageDidScroll:(double)a0;
- (void)removeFilterView;
- (id)componentCellTrackParamsWithModel:(id)a0;
- (void)showSelectBoardWithFilterView:(id)a0 model:(id)a1;
- (void)configDisplayTextWithModel:(id)a0 filterManager:(id)a1;
- (void)heightDidChanged:(double)a0;
- (void)showSelectExpandViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 componentModel:(id)a1;
- (void)showDropDownExpandViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 componentModel:(id)a1;
- (id)findComponentCellWithClass:(Class)a0;
- (void)addBlankViewForFilter;
- (void)filterExpandViewReloadData;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)containerView;
- (void)layoutSubviews;
- (void)beginRequest;

@end
