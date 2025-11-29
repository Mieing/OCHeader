@class UITableView, NSString, UIImageView, UILongPressGestureRecognizer;

@interface AWEDeliveryBaseUserMsgCell : AWEDeliveryBaseMsgCell

@property (retain, nonatomic) UIImageView *avatarImgView;
@property (retain, nonatomic) UILongPressGestureRecognizer *containerLongGesture;
@property (retain, nonatomic) NSString *userNickName;
@property (weak, nonatomic) UITableView *cellSuperView;
@property (nonatomic) BOOL supportResend;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;
+ (struct CGSize { double x0; double x1; })riskTextSizeWithModel:(id)a0;

- (void)didCustomInit;
- (void)didInitSubviewLayouts;
- (void)onDoubleTap:(id)a0;
- (void)onClickResend;
- (void)avatarViewViewDidTapAction:(id)a0;
- (void)bindAvatarAndBubbleViewStyle;
- (void)updateUIWhenMessageStatusDidChanged;
- (void)showIndicatorImageView;
- (void)showIndicatorLabelViewWithIsRead:(BOOL)a0;
- (void)updateUIForSendFailedStatus;
- (void)setCellModel:(id)a0;
- (void)stopAnimating;
- (void)startAnimating;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)onLongPress:(id)a0;

@end
