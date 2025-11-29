@class AWEEcomPhotoSearchSectionTitleView, AWEEcommerceSearchLynxBaseView, UIView, AWEDynamicPatchModel;
@protocol AWESearchMerchandiseDoubleColumnCell;

@interface AWESearchPhotoResultsContentTopAreaContainerView : UIView

@property (retain, nonatomic) AWEEcommerceSearchLynxBaseView *lynxView;
@property (retain, nonatomic) AWEDynamicPatchModel *patchModel;
@property (retain, nonatomic) UIView<AWESearchMerchandiseDoubleColumnCell> *liveGoodsCell;
@property (retain, nonatomic) UIView *noIdenticalProductsHintView;
@property (retain, nonatomic) AWEEcomPhotoSearchSectionTitleView *titleView;
@property (copy, nonatomic) id /* block */ containerViewHeightDidChanged;

- (double)getTopAreaContainerHeight;
- (void)updateWithModel:(id)a0 searchInfoDict:(id)a1;
- (void)lynxViewSizeChanged:(struct CGSize { double x0; double x1; })a0;
- (void)configNoIdenticalProductsHintViewUIWithModel:(id)a0;
- (void)updateLynxViewWithDynamicPatch:(id)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)updateTitle:(id)a0;

@end
