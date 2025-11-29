@class NSString, UIViewController, GameItem;

@interface GameCgiGetInfoAndJump : NSObject

@property (retain, nonatomic) NSString *fromAppId;
@property (retain, nonatomic) NSString *fromUrl;
@property (retain, nonatomic) NSString *promotionId;
@property (nonatomic) int fromType;
@property (weak, nonatomic) UIViewController *fromViewController;
@property (retain, nonatomic) GameItem *gameInfo;

- (id)initWithType:(id)a0 url:(id)a1 type:(int)a2 viewController:(id)a3;
- (void)GetLaunchGameInfo:(id)a0 promotionId:(id)a1 success:(id /* block */)a2 fail:(id /* block */)a3;
- (void)openAppStore:(id)a0 success:(id /* block */)a1 fail:(id /* block */)a2;
- (void)openLiteApp:(id)a0 success:(id /* block */)a1 fail:(id /* block */)a2;
- (void)openInWebview:(id)a0 success:(id /* block */)a1 fail:(id /* block */)a2;
- (void)handleJumpInfo:(id)a0 webviewInfo:(id)a1 success:(id /* block */)a2 fail:(id /* block */)a3;
- (void)openWebview:(id)a0 success:(id /* block */)a1 fail:(id /* block */)a2;
- (void)reportStartAction:(id)a0;
- (void)reportPromotionId:(int)a0 success:(id /* block */)a1 fail:(id /* block */)a2;
- (void)showAlert:(id)a0;
- (id)getWebViewController:(id)a0 statusBarBgColor:(id)a1 statusBarStyle:(id)a2 toUrl:(id)a3;
- (BOOL)analyzeBackColor:(id *)a0 frontColor:(id *)a1 fromUrl:(id)a2 andParamColor:(id)a3 andParamStyle:(id)a4 isUseImmersiveUI:(BOOL *)a5;
- (void).cxx_destruct;

@end
