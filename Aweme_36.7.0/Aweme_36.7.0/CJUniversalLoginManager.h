@class CJPayNavigationController, CJPayBizWebViewController;
@protocol CJUniversalLoginProviderDelegate;

@interface CJUniversalLoginManager : NSObject

@property (copy, nonatomic) id /* block */ completionBlock;
@property (weak, nonatomic) CJPayBizWebViewController *payWebVC;
@property (retain, nonatomic) id<CJUniversalLoginProviderDelegate> provider;
@property (retain, nonatomic) CJPayNavigationController *universalLoginNavi;
@property (nonatomic) BOOL isInvalid;

+ (id)bindManager:(id)a0;

- (void)p_refreshLoginInfo;
- (void)p_execCompletionBlock:(unsigned long long)a0 loginModel:(id)a1;
- (void)p_gotoUniversalLogin:(id)a0;
- (void)p_gotoThrottlePage;
- (void)p_openLogin:(id)a0;
- (void)bindDataDelegate:(id)a0;
- (void)execLogin:(id /* block */)a0;
- (void)cleanLoginEvent;
- (void).cxx_destruct;

@end
