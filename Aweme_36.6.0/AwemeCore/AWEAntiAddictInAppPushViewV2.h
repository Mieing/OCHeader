@class UIView, NSString, NSArray, AWEAntiAddictInAppPushViewModelV2, UIImageView, UIButton, CAGradientLayer, LOTAnimationView, NSMutableArray, UILabel;
@protocol AWEInnerNotificationContentOperator;

@interface AWEAntiAddictInAppPushViewV2 : UIView <AWEInnerNotificationContent>

@property (retain, nonatomic) AWEAntiAddictInAppPushViewModelV2 *model;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *timeManageLable;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property BOOL isEnterTimeManage;
@property (copy, nonatomic) NSString *triggerType;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) NSMutableArray *buttonArray;
@property (nonatomic) BOOL isTimeManagerUIConfigValid;
@property (nonatomic) BOOL isCurTimeBetween5And22;
@property (copy, nonatomic) NSString *remindTitle;
@property (retain, nonatomic) NSArray *buttonConfigs;
@property (retain, nonatomic) NSArray *buttonTitles;
@property (copy, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)disablePullIndicatorView;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)handleTapAction;
- (void)closeButtonDidClick;
- (void)resetLayoutToOldStyle;
- (void)showIconViewWithContent:(id)a0;
- (void)showLottieViewWithContent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lottieViewFrame;
- (void)chooseButtonDidClick:(id)a0;
- (void)p_trackTimeManagerClickWithButtonType:(unsigned long long)a0;
- (void)p_setAntiAddictRemindStateFromButton:(id)a0;
- (void)p_setRemindFromButton:(id)a0;
- (void)p_trackToastClick;
- (void)recordToastClick;
- (BOOL)canShowTimeManager;
- (void)showTimeManager;
- (void)p_trackTimeManagerShow;
- (void)transferToTimeManager;
- (void)setupTimeManagerUIStep1;
- (void)setupTimeManagerUIStep2;
- (void)viewDidDisappearWithReason:(long long)a0;
- (double)dismissTimerInterval;
- (BOOL)isContainerBackgroundClear;
- (BOOL)isContainerClipsToBounds;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)view;
- (id)colorWithHexString:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
