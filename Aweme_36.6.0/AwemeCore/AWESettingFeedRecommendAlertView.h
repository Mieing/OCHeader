@class NSString, CAShapeLayer, UIView, UIViewController;

@interface AWESettingFeedRecommendAlertView : UIView

@property (retain, nonatomic) UIView *mainView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) NSString *page;
@property (retain, nonatomic) UIViewController *dummyVC;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)realShow;
- (void)closeBtnDidClick;
- (void)cancelBtnDidClick;
- (void)sureBtnDidClick;
- (void)topViewDidClick;
- (void)p_closeWithCompletion:(id /* block */)a0;
- (void)addToWindow;
- (void)close;
- (void)setUp;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)show;

@end
