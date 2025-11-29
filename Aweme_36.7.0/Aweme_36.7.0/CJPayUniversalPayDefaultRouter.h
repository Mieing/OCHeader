@class NSString, CJPayNavigationController;
@protocol CJPayAPIDelegate;

@interface CJPayUniversalPayDefaultRouter : NSObject <CJPayDeskRouteDelegate, CJPayAPIDelegate>

@property (retain, nonatomic) CJPayNavigationController *navigationController;
@property (retain, nonatomic) id<CJPayAPIDelegate> originalDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)callState:(BOOL)a0 fromScene:(long long)a1;
- (void)onResponse:(id)a0;
- (void)callState:(BOOL)a0 fromScene:(long long)a1 params:(id)a2;
- (void)push:(id)a0 animated:(BOOL)a1;
- (void)p_presentVC:(id)a0 animated:(BOOL)a1;
- (id)p_handlePushHalfViewController:(id)a0;
- (id)p_handlePresentHalfViewController:(id)a0;
- (BOOL)p_topVCIsHalfVC;
- (void)routeToVC:(id)a0 animated:(BOOL)a1;
- (void)exitVCWithCallbackId:(id)a0;
- (void)exitWithCallbackId:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
