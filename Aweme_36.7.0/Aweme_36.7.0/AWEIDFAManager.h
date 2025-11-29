@interface AWEIDFAManager : NSObject

@property (nonatomic) BOOL needGuide;
@property (copy, nonatomic) id /* block */ showAlertBlock;

+ (id)sharedInstance;

- (void)showIDFAIfNeededWithCompletion:(id /* block */)a0;
- (void)registerSpalshDisappearNotification;
- (void)didReceiveSplashDisappearNotification;
- (int)shouldShowIDFA;
- (void)showIDFAAlertWithType:(int)a0 andCompletion:(id /* block */)a1;
- (void).cxx_destruct;

@end
