@class CJPayFaceRecognitionFullLeadPageView, CJPayFaceRecognitionLeadPageModel, NSTimer, UIImageView;

@interface CJPayFaceRecognitionFullLeadPageViewController : CJPayFullPageBaseViewController

@property (nonatomic) long long countDown;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) UIImageView *topTitleImageView;
@property (retain, nonatomic) CJPayFaceRecognitionFullLeadPageView *contentView;
@property (nonatomic) BOOL isUserCheckProtocol;
@property (nonatomic) BOOL isNeedRetain;
@property (nonatomic) BOOL isInMiddleStationPage;
@property (retain, nonatomic) CJPayFaceRecognitionLeadPageModel *model;
@property (readonly, nonatomic) double realCenterYOffset;

- (long long)cjpay_preferredStatusBarStyle;
- (BOOL)cjShouldShowBottomView;
- (void)trackerWithName:(id)a0 params:(id)a1;
- (void)p_setupConstraints;
- (void)p_didEnterBackground;
- (void)p_willEnterForeground;
- (void)p_clickConfirmBtn;
- (void)confirmBtnLoading:(BOOL)a0;
- (void)p_checkProperties;
- (void)p_startCountDown;
- (void)p_showOptRetain;
- (void)p_showRetain;
- (void)p_countDownAction;
- (void)p_clickProtocolCheckBox:(BOOL)a0;
- (void)p_checkProtocol:(id)a0;
- (void)p_setupUI;
- (void)close;
- (void).cxx_destruct;
- (void)invalidate;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
