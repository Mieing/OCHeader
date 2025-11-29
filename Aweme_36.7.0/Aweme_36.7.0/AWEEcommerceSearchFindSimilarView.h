@class UIImageView, AWEDoubleColumnSearchMerchandiseModel, UILabel, UIView;
@protocol AWEEcommerceSearchFeedbackPanelProtocol;

@interface AWEEcommerceSearchFindSimilarView : UIView

@property (retain, nonatomic) UIImageView *findSimilarGoodsImageView;
@property (retain, nonatomic) UIView *imageShadowView1;
@property (retain, nonatomic) UIView *imageShadowView2;
@property (retain, nonatomic) UILabel *findSimilarLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *merchandiseModel;
@property (weak, nonatomic) id<AWEEcommerceSearchFeedbackPanelProtocol> delegate;
@property (nonatomic) BOOL hasSidebar;

- (void)updateWithMerchandiseModel:(id)a0;
- (void)clickFindSimilarView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
