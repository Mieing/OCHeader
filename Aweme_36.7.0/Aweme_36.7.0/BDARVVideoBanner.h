@class UITapGestureRecognizer, NSString, UIImageView, BDARVADModel, UILabel, UIView, UIButton;
@protocol BDARVVideoBannerDelegate;

@interface BDARVVideoBanner : UIView

@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *desLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UILabel *titleLabelMask;
@property (retain, nonatomic) UILabel *desLabelMask;
@property (retain, nonatomic) UIButton *actionButtonMask;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (copy, nonatomic) NSString *adTag;
@property (retain, nonatomic) UIView *lineView;
@property (weak, nonatomic) id<BDARVVideoBannerDelegate> delegate;
@property (retain, nonatomic) BDARVADModel *adModel;

- (void)showMask;
- (void)actionBtnClick:(id)a0;
- (void)setupMask;
- (void)layoutBannerSubviews;
- (void)setIconImageNamed:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)refreshButton;
- (void)tapAction:(id)a0;

@end
