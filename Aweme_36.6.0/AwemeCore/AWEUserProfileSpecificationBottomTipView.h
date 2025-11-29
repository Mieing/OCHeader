@class NSDictionary, UIImageView, AWEUserProfileSpecificationBottomTip, UILabel, UIButton;

@interface AWEUserProfileSpecificationBottomTipView : UIView <AWEProfileBubbleProtocol>

@property (retain, nonatomic) AWEUserProfileSpecificationBottomTip *bottomTip;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIButton *contentView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *closeBtn;

- (void)configWithModel:(id)a0;
- (void)closeBtnTapped;
- (void)p_themeDidChange;
- (void)p_setupSubviewsWithPushTip:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)didShow;
- (void)setupSubviews;
- (void)jump;

@end
