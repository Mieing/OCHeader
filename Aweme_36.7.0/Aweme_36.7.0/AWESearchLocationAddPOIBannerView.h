@class UIImageView, AWEPOISearchAddLocationBannerModel, UILabel, UIView, UIButton;
@protocol AWESearchLocationAddPOIBannerViewDelegate;

@interface AWESearchLocationAddPOIBannerView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UIView *middleView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *tipsButton;
@property (retain, nonatomic) UIView *rightView;
@property (retain, nonatomic) UILabel *arrowLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (weak, nonatomic) id<AWESearchLocationAddPOIBannerViewDelegate> delegate;
@property (nonatomic) double topPadding;
@property (nonatomic) double bottomPadding;
@property (retain, nonatomic) AWEPOISearchAddLocationBannerModel *model;

- (void)__buildUI;
- (void)__layoutUI;
- (void)renderWithModel:(id)a0;
- (void)__clickTipsButton;
- (void)__tap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1 topPadding:(double)a2 bottomPadding:(double)a3;
- (void).cxx_destruct;

@end
