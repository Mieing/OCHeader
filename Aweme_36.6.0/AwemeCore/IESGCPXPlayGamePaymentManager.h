@class IESGCPXPlayGameAPI, BDXBridgeEventSubscriber, NSString;

@interface IESGCPXPlayGamePaymentManager : NSObject <IESGCPDIContextSubscriber, PuzzleKitViewLifeCycleProtocol>

@property (retain, nonatomic) IESGCPXPlayGameAPI *api;
@property (retain, nonatomic) BDXBridgeEventSubscriber *jsbSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *walletPageJsbSubscriber;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL walletPageShowing;
@property (nonatomic) BOOL didFinishLoadWithURL;
@property (copy, nonatomic) NSString *outOrderId;
@property (copy, nonatomic) id /* block */ onPaymentFinishedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)kitView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)kitView:(id)a0 viewDidLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)kitViewWillDealloc:(id)a0;
- (void)didSetGameCPDIContext;
- (void)payWithOutOrderId:(id)a0 gameModel:(id)a1;
- (void)_reportLastKillAppExitIfNeed;
- (void)payWithOutOrderId:(id)a0 gameModel:(id)a1 orientation:(long long)a2;
- (void)monitorEvent:(id)a0 extra:(id)a1;
- (void)_sendPayInterruptedWithOrderId:(id)a0;
- (void)_sendUnsupportWithOrderId:(id)a0;
- (void)_sendRiskControlWithOrderId:(id)a0;
- (void)showPayLimitAlertWithMessage:(id)a0;
- (void)_sendOverPayLimitWithOrderId:(id)a0;
- (void)_trackOverPayLimitWithReason:(id)a0;
- (void)_sendNetworkErrorWithOrderId:(id)a0;
- (void)trackAbnormalStatisticsEvent:(long long)a0;
- (void)_truePayWithOrderId:(id)a0 gameModel:(id)a1 schema:(id)a2;
- (void)_registerPaymentCallbackJsbSubscriber;
- (void)_registerWalletPageCallbackJsbSubscriber;
- (id)_walletFinalSchemaWithSchema:(id)a0 gameModel:(id)a1;
- (long long)_orientationFromXPlayOrientation:(long long)a0;
- (void)_handlePaymentCallbackJsbWithParams:(id)a0;
- (void)_sendSuccessWithOrderId:(id)a0;
- (void)_sendCancelWithOrderId:(id)a0;
- (void)_sendTimeOutWithOrderId:(id)a0;
- (void)_sendParameterErrorWithOrderId:(id)a0;
- (void)_sendCallbackWithCode:(long long)a0 message:(id)a1 outOrderId:(id)a2;
- (void)_sendPayViewLoadFailWithOrderId:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (void)dealloc;
- (void)_applicationWillTerminate;

@end
