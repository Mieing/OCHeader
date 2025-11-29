@class NSString;

@interface AWEEcomSearchSchemaMonitor : NSObject <AWERouterDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)getMonitorExtraParams:(id)a0;
+ (void)monitorSendRequestWithParams:(id)a0;
+ (id)sharedMonitor;

- (void)routerDidTransferWithURLString:(id)a0 fromViewController:(id)a1 toViewController:(id)a2 transitionType:(long long)a3;
- (void)routerDidFailTransferingWithURLString:(id)a0 errorMessage:(id)a1;
- (void)routerDidRetrieveViewControllerForURLString:(id)a0 viewController:(id)a1;
- (BOOL)isEcomSearchWithURL:(id)a0;
- (BOOL)isSearchSchemaWithURL:(id)a0;
- (BOOL)isPhotoSearchWithURL:(id)a0;
- (BOOL)isSearchInMallWithURL:(id)a0;
- (BOOL)isMallSaaSSearchWithURL:(id)a0;
- (void)reportAndValidateWithURLString:(id)a0;
- (BOOL)isSearchSchemaWithURLString:(id)a0;
- (void)reportOpenSchemaWithURLString:(id)a0 errorMessage:(id)a1;
- (BOOL)shouldVerifiedWithURLString:(id)a0;
- (void)invokeValidatorWithURLString:(id)a0;
- (void)reportVerificationFailedWithURLString:(id)a0 response:(id)a1;
- (void)showPromptWithInfoIfNeeded:(id)a0;
- (id)sceneDescriptionWithURL:(id)a0;

@end
