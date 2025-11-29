@class UIStackView, IESECButton, UIView, NSArray, IESECShopProductsFilterConfig, NSString, IESECShopGoodsSortModel, IESECShopProductsFilterCardModel, IESECShopProductsPromotionFilterContainer, IESECSlidingTabbarView, IESECShopProductSwitchButtonsView, IESECShopProductsSelectButtonContainer;
@protocol IESECShopProductFilterCellDelegate;

@interface IESECShopProductFilterCell : UICollectionViewCell <IESECSlidingTabbarLayoutDelegate, IESECSlidingTabbarDelegate, IESECShopProductSwitchButtonsViewDelegate, IESECShopProductsSelectButtonContainerDelegate, IESECShopProductsPromotionFilterContainerDelegate, IESECShopComprehensiveExpendViewDelegate> {
    IESECShopGoodsSortModel *_selectedSort;
    long long _currentSortType;
    IESECShopProductsFilterCardModel *_model;
}

@property (retain, nonatomic) IESECSlidingTabbarView *tabView;
@property (nonatomic) BOOL needReverse;
@property (retain, nonatomic) IESECShopProductSwitchButtonsView *switchButtonsView;
@property (retain, nonatomic) UIView *dividerLine;
@property (retain, nonatomic) IESECButton *selectPanelButton;
@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) BOOL isFromExpendView;
@property (nonatomic) BOOL shouldMovePromotionFilterUp;
@property (retain, nonatomic) IESECShopProductsSelectButtonContainer *selectButtonContainer;
@property (retain, nonatomic) IESECShopProductsPromotionFilterContainer *promotionFilterContainer;
@property (copy, nonatomic) NSArray *subSorts;
@property (nonatomic) unsigned long long subSortIndex;
@property (weak, nonatomic) id<IESECShopProductFilterCellDelegate> delegate;
@property (nonatomic) BOOL shouldShowExpendView;
@property (retain, nonatomic) IESECShopProductsFilterConfig *productFilterConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ indexChanged;

- (void)updateUIWithConfig:(id)a0;
- (void)maskViewClickAction;
- (void)buttonDidClick:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })slidingTabbarView:(id)a0 frameForRedDotInSegment:(id)a1 defaultFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)tabbarTappedAtIndex:(unsigned long long)a0;
- (void)showSubTag:(id)a0;
- (void)clickSubTag:(id)a0;
- (void)selectPanelButtonShowed;
- (void)selectPanelButtonTapped;
- (id)findCurrentSelectSortModel:(id)a0;
- (void)couponFilterButtonShowed;
- (void)PromotionFilterButtonShowed;
- (void)setTabViewToSelectIndex:(BOOL)a0;
- (void)updateComprehensiveIcon:(BOOL)a0;
- (void)setSelectedIndexFromExpendView:(unsigned long long)a0;
- (void)TapSelectPanelButton:(id)a0;
- (void)showSwitchButton:(id)a0 type:(id)a1;
- (void)clickSwitchButton:(id)a0 type:(id)a1 newConfig:(id)a2 newType:(id)a3;
- (void)showSwitchBubbleView:(id)a0 withConfig:(id)a1;
- (void)selectButtonTagDidClickAtIndex:(long long)a0;
- (void)promotionFilterButtonTagDidClickAtIndex:(long long)a0;
- (void)updateSelectPanelButtonState:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithModel:(id)a0;
- (void)setSelectedIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setUpViews;

@end
