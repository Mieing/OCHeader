@class NSString, UIImageView, NSTimer, UILabel, UIView, UILongPressGestureRecognizer;
@protocol _TtP9AWELottie13AWELottieView_;

@interface AWEECOMIMBaseUserMsgCell : AWEECOMIMBaseMsgCell

@property (retain, nonatomic) UIImageView *avatarImgView;
@property (retain, nonatomic) UIImageView *aiCornerImageView;
@property (retain, nonatomic) UILongPressGestureRecognizer *containerLongGesture;
@property (retain, nonatomic) NSString *userNickName;
@property (retain, nonatomic) UIImageView *benedictionImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *animationView;
@property (retain, nonatomic) NSTimer *animationTimer;
@property (nonatomic) BOOL supportResend;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;
+ (struct CGSize { double x0; double x1; })riskTextSizeWithModel:(id)a0;
+ (double)benedictionImageViewWidth;
+ (double)benedictionImageViewRightWidth;
+ (double)benedictionImageViewHeight;
+ (double)benedictionImageViewTopHeight;
+ (double)avatarCornerRadius;

- (void)didCustomInit;
- (void)onDoubleTap:(id)a0;
- (void)onClickResend;
- (void)avatarViewViewDidTapAction:(id)a0;
- (void)updateUIWhenMessageStatusDidChanged;
- (void)showIndicatorImageView;
- (void)showIndicatorLabelViewWithIsRead:(BOOL)a0;
- (void)trackPopMenuItemsShowWithItems:(id)a0;
- (void)trackPopMenuItemsClickWithItem:(id)a0;
- (id)originalPopMenuItems;
- (BOOL)canShowMenuItemReport;
- (void)baseUserMsgAddLongPress;
- (BOOL)canBaseUserMsgAddLongPress;
- (void)layoutAvatarAndBubbleViewStyle;
- (void)templateMsg;
- (void)dynamicMsg;
- (void)configNickNameText;
- (void)dealProgress:(id)a0;
- (void)updateUIForSendFaildedStatus;
- (void)setCellModel:(id)a0;
- (void)stopAnimating;
- (void)startAnimating;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)dealloc;
- (void)onLongPress:(id)a0;

@end
