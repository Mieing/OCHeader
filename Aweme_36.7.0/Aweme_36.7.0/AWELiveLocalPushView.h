@class NSString, UIImageView, IESLiveGCDTimer, UILabel, IESLiveLocalPushModel;
@protocol AWEInnerNotificationContentOperator;

@interface AWELiveLocalPushView : UIView <AWEInnerNotificationContent>

@property (retain, nonatomic) UIImageView *iconImgView;
@property (retain, nonatomic) UILabel *titleLbl;
@property (retain, nonatomic) UILabel *detailLbl;
@property (retain, nonatomic) UILabel *actionLbl;
@property (retain, nonatomic) UIImageView *arrowImage;
@property (nonatomic) double leftTime;
@property (nonatomic) double countDownInterval;
@property (retain, nonatomic) IESLiveGCDTimer *countDownTimer;
@property (retain, nonatomic) IESLiveLocalPushModel *model;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)handleTapAction;
- (void)viewWillDisappearWithReason:(long long)a0;
- (double)dismissTimerInterval;
- (void)updateSubViews;
- (BOOL)isValidIconSize:(struct CGSize { double x0; double x1; })a0;
- (void)doCountdown;
- (void)stopCountdownTimer;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)view;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)contentFrom:(id)a0;

@end
