@class AWEPayMediaCoverView, UIImageView, AWEMultiAvatarView, AWEGradientView, UIView, UILabel;

@interface AWEIMDouyinRedPacketView : UIView

@property (copy, nonatomic) id /* block */ tapActionBlock;
@property (nonatomic) BOOL isSimpleStyle;
@property (nonatomic) BOOL isRedpacketEnd;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIImageView *topCoverView;
@property (retain, nonatomic) AWEPayMediaCoverView *mediaCoverView;
@property (retain, nonatomic) UIImageView *bottomCoverView;
@property (retain, nonatomic) UILabel *titleTopSupplementLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *leftLineView;
@property (retain, nonatomic) UILabel *coverSubTitleView;
@property (retain, nonatomic) UIView *rightLineView;
@property (retain, nonatomic) AWEMultiAvatarView *multiAvatarView;
@property (retain, nonatomic) UILabel *middleTextLabel;
@property (retain, nonatomic) UIImageView *openBtnView;
@property (retain, nonatomic) UIImageView *senderAvatar;
@property (retain, nonatomic) UIView *audioView;
@property (retain, nonatomic) UILabel *subTitleLabel;

- (void)p_addGesture;
- (void)p_constraintSubViews;
- (void)p_onTapCard;
- (id)p_createGradeLine:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
