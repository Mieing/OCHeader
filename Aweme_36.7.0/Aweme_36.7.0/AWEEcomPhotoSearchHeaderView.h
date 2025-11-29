@class AWEEcommerceSearchLynxBaseView, AWEEcomSearchTopSectionGoodsView, UIView, AWEDoubleColumnSearchMerchandiseModel, NSString, AWESearchMerchandiseSingleOriginGoodsCell, AWEDynamicPatchModel, UIButton, CAGradientLayer;
@protocol AWESearchPhotoSearchResultsTopViewDelegate;

@interface AWEEcomPhotoSearchHeaderView : UIView <AWESearchInlayScrollPanelTopViewProtocol, AWESearchPhotoTopResultProtocol>

@property (retain, nonatomic) UIView *galleryView;
@property (retain, nonatomic) AWEEcommerceSearchLynxBaseView *lynxView;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) AWEEcomSearchTopSectionGoodsView *goodsView;
@property (retain, nonatomic) AWEDynamicPatchModel *patchModel;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *originProductCardModel;
@property (retain, nonatomic) AWEEcomSearchTopSectionGoodsView *preloadGoodsView;
@property (retain, nonatomic) AWESearchMerchandiseSingleOriginGoodsCell *originProductCard;
@property (nonatomic) BOOL videoEntrance;
@property (copy, nonatomic) id /* block */ closeButtonClickedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESearchPhotoSearchResultsTopViewDelegate> delegate;

- (void)configUI;
- (void)feedDidScroll:(id)a0;
- (double)inlayScrollPanelTopViewHeight;
- (double)inlayScrollPanelTopPatchViewHeight;
- (void)updateOriginProductCard:(id)a0 parameters:(id)a1;
- (BOOL)alreadySetupProductCardModel;
- (void)updateCompareInfoCard:(id)a0;
- (void)updateGalleryViewAndRightButtonAlpha:(double)a0;
- (void)showGoodsViewWithModel:(id)a0;
- (void)showGoodsViewWithModel:(id)a0 type:(long long)a1;
- (void)preloadLynxCardWithConfigs:(id)a0;
- (id)initWithGalleryView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)goodsViewHeight;
- (void)originCardSizeChanged:(struct CGSize { double x0; double x1; })a0;
- (void)lynxViewSizeChanged:(struct CGSize { double x0; double x1; })a0;
- (void)rightButtonAction:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
