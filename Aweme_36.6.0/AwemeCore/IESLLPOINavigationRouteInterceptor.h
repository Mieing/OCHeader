@class NSArray, NSString;

@interface IESLLPOINavigationRouteInterceptor : NSObject <IESLLRouterInterceptorDelegate>

@property (retain, nonatomic) NSArray *settings;
@property (retain, nonatomic) NSArray *pages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)interceptorActionBeforeTransferWithURLString:(id)a0 userInfo:(id)a1;
- (unsigned long long)interceptorActionWhenTransferingWithTransitionInfo:(id)a0;
- (void)endIfNeeded;
- (BOOL)matchAndDealWithLaunchMode:(id)a0 tag:(id)a1;
- (BOOL)matchAndDealClearTopWithTag:(id)a0;
- (id)matchedViewControllerInPageStackWithTag:(id)a0;
- (id)matchedViewControllerInSourceViewController:(id)a0 targetTag:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)startIfNeeded;

@end
