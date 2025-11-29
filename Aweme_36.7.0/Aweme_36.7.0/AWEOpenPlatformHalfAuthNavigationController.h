@class NSArray, NSString, AWEOpenPlatformAuthFlowManager;

@interface AWEOpenPlatformHalfAuthNavigationController : UINavigationController <UINavigationControllerDelegate, AWEOpenPlatformAuthFlowManagerDelegate, AWEOpenPlatformBridgeAuthViewController>

@property (retain, nonatomic) AWEOpenPlatformAuthFlowManager *flowManager;
@property (copy, nonatomic) id /* block */ bridgeAuthCompletionBlock;
@property (copy, nonatomic) NSArray *currentNormalScopeItems;
@property (nonatomic) BOOL autoPushNext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)authNextStep:(unsigned long long)a0;
- (void)authorizeComplated:(id)a0 error:(id)a1;
- (void)cancelAuthorizeError:(id)a0;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFlowManager:(id)a0;

@end
