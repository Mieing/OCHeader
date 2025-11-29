@class UIImageView, UILabel, UIView;
@protocol AWESettingSwitchProtocol;

@interface AWEMusicPrivacyPopupView : AWEMusicStreamingBasePopupView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UIView<AWESettingSwitchProtocol> *activeTipsSwitch;
@property (retain, nonatomic) UILabel *hintLabel;
@property (nonatomic) BOOL isRequesting;

- (void)switchControlDidChanged:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
