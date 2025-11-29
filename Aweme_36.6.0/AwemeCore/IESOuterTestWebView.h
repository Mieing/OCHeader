@class UIViewController;
@protocol IESOuterTestWebViewControllerDelegate;

@interface IESOuterTestWebView : IESWKWebView

@property (weak, nonatomic) UIViewController<IESOuterTestWebViewControllerDelegate> *controllerDelegate;
@property (nonatomic) BOOL disableAllBounces;

+ (void)initialize;

- (void)configAppInfoPiper:(id)a0;
- (void)configToastPiper:(id)a0;
- (void)configApplogPiper:(id)a0;
- (void)configNetworkPiper:(id)a0;
- (void)configFeedbackPiper:(id)a0;
- (void)configWebviewPiper:(id)a0;
- (void)configSchemaPiper:(id)a0;
- (void)configPageClosePiper:(id)a0;
- (void)configStatusBarPiper:(id)a0;
- (void)configJoinOuterTestPiper:(id)a0;
- (void)configBackButtonActionBridge:(id)a0;
- (void)active;
- (void).cxx_destruct;
- (id)init;
- (void)inactive;
- (void)dealloc;

@end
