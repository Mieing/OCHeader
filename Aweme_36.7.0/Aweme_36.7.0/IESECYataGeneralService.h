@class NSString, UIViewController;

@interface IESECYataGeneralService : NSObject <YataRouterService, YataToastService>

@property (weak, nonatomic) UIViewController *hostVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openURLSchema:(id)a0 withBTMIdentifier:(id)a1 withBCMParams:(id)a2 host:(id)a3;
- (void)setupBTMChainWithBTM:(id)a0 host:(id)a1 targetPages:(id)a2 bcmDesc:(id)a3;
- (void)setupBCMUnitParams:(id)a0 bcmDescription:(id)a1 responder:(id)a2;
- (void)toastMessage:(id)a0;
- (void).cxx_destruct;

@end
