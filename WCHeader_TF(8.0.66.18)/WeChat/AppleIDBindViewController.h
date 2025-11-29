@class AppleStyleLoginRegisterButton, NSString, AppleIDBindLogic, ThirdAppBindReportObject, UILabel, UIButton;
@protocol AppleIDBindViewControllerDelegate;

@interface AppleIDBindViewController : MMUIViewController <AppleIDBindLogicDelegate>

@property (nonatomic, getter=isAppleIDBound) BOOL appleIDBound;
@property (retain, nonatomic) AppleIDBindLogic *appleIDBindLogic;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *unbindButton;
@property (retain, nonatomic) AppleStyleLoginRegisterButton *bindButton;
@property (retain, nonatomic) ThirdAppBindReportObject *reportObject;
@property (weak, nonatomic) id<AppleIDBindViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)initData;
- (void)initView;
- (id)navigationBarBackgroundColor;
- (void)viewDidTransitionToNewSize;
- (void)updateLayout;
- (void)refreshContent;
- (void)onTapCloseBarButton;
- (void)onTapBindButton;
- (void)onTapUnbindButton;
- (id)getViewController;
- (void)onRequestAuthorizeFromAppleFinished:(BOOL)a0;
- (void)onBindAppleIDSucceed;
- (void)onBindAppleIDFailedWithError:(id)a0;
- (void)onUnbindAppleIDSucceed;
- (void)onUnbindAppleIDFailedWithError:(id)a0;
- (void).cxx_destruct;

@end
