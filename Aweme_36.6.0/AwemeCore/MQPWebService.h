@class UINavigationController, NSString, NSArray, UIView;
@protocol MQPWebServiceDelegate;

@interface MQPWebService : NSObject

@property (retain, nonatomic) UINavigationController *naviVC;
@property (retain, nonatomic) UIView *apMaskView;
@property (copy, nonatomic) NSString *userAgent;
@property (nonatomic) BOOL statusBarHidden;
@property (nonatomic) long long statusBarStyle;
@property (copy, nonatomic) NSString *sdkVersion;
@property (weak, nonatomic) id<MQPWebServiceDelegate> delegate;
@property (copy, nonatomic) NSArray *whiteHostList;
@property (copy, nonatomic) NSString *paramsStr;
@property (copy, nonatomic) NSString *bundleName;
@property (nonatomic) BOOL shouldLoadJSBridge;

+ (id)defaultWebViewUserAgent;
+ (void)getDefaulUserAgentByBlock:(id /* block */)a0;

- (id)currentWebVC;
- (id)initWithBundleName:(id)a0 sdkVersion:(id)a1;
- (BOOL)openWithUrl:(id)a0 h5mode:(long long)a1;
- (BOOL)openWithUrl:(id)a0 method:(id)a1 title:(id)a2 h5mode:(long long)a3;
- (void)setRefreshButtonHidden:(BOOL)a0;
- (void)onServiceBack;
- (void)onServiceClosed:(id)a0;
- (void)cleanAndRecovery;
- (void)changeSDKUA4iOS8;
- (void)resumeSDKUA4iOS8;
- (void)setBackButtonHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)closeWithResult:(id)a0;
- (void)refresh;
- (void)setTitle:(id)a0;
- (void)dealloc;
- (void)setToolbarHidden:(BOOL)a0;
- (void)back;

@end
