@class CAGradientLayer, DUXBasicButton, UIImageView, UIVisualEffectView, UIView, UILabel;

@interface AWEPadPolymericChannelLiveBookingCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *bottomImageView;
@property (retain, nonatomic) CAGradientLayer *coverBottomInfoMaskLayer;
@property (retain, nonatomic) UIVisualEffectView *coverBottomInfoMaskView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) DUXBasicButton *bookingBtn;
@property (copy, nonatomic) id /* block */ onBookingBtnClicked;

- (void)onBookingBtnClicked:(id)a0;
- (void)dynamicRemakeTitleLabelLayout;
- (void)updateCoverImageWithUrlArray:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupView;

@end
