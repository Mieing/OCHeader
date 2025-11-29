@class IESECShopProductsSelectButtonContainer, NSString, IESECStoreFilterDiffableModel, NSTimer, UIView, IESECSlidingTabbarView, IESECButton;
@protocol IESECStoreFilterCollectionViewCellDelegate;

@interface IESECStoreNewFilterCollectionViewCell : UICollectionViewCell <IESECSlidingTabbarLayoutDelegate, IESECSlidingTabbarDelegate, IESECShopProductsSelectButtonContainerDelegate, IGListBindable> {
    IESECShopProductsSelectButtonContainer *_selectButtonContainer;
}

@property (retain, nonatomic) IESECStoreFilterDiffableModel *model;
@property (retain, nonatomic) IESECSlidingTabbarView *tabView;
@property (nonatomic) BOOL needReverse;
@property (retain, nonatomic) IESECButton *columnSwitchButton;
@property (retain, nonatomic) UIView *dividerLine;
@property (retain, nonatomic) IESECButton *selectPanelButton;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL showSwitchButton;
@property (nonatomic) long long productTabStyle;
@property (nonatomic) BOOL showSwitchButtonTitle;
@property (weak, nonatomic) id<IESECStoreFilterCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ indexChanged;

- (void)bindViewModel:(id)a0;
- (id)popupManager;
- (void)switchButtonTapped;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })slidingTabbarView:(id)a0 frameForRedDotInSegment:(id)a1 defaultFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)configProductTabStyle:(long long)a0 ShowSwitchButton:(BOOL)a1;
- (void)configProductTabStyle:(long long)a0 ShowSwitchButton:(BOOL)a1 showSwitchButtonTitle:(BOOL)a2;
- (void)switchButtonShowed;
- (void)selectPanelButtonShowed;
- (void)selectPanelButtonTapped;
- (void)couponFilterButtonShowed;
- (void)TapSelectPanelButton:(id)a0;
- (void)selectButtonTagDidClickAtIndex:(long long)a0;
- (void)updateSelectPanelButtonState:(BOOL)a0;
- (void)updateSwitchButtonWithProductTabStyle:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)mainScrollView;
- (void)setSelectedIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setUpViews;

@end
