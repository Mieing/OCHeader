@class NSString, WCAddressControlLogic, MMFlutterViewController;

@interface EcsNativeApiFlutterPlugin : NSObject <IWCAddressControlLogic, SessionSelectControllerDelegate, WCAddressLogicMgrExt, MMFlutterPlugin, EcsNativeApi>

@property (copy, nonatomic) id /* block */ selectContactCallback;
@property (copy, nonatomic) id /* block */ getAllAddressCallback;
@property (copy, nonatomic) id /* block */ editAddressCallback;
@property (retain, nonatomic) WCAddressControlLogic *currentLogic;
@property (weak, nonatomic) MMFlutterViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)openUrlUrl:(id)a0 error:(id *)a1;
- (void)selectAddressFromGiver:(BOOL)a0 completion:(id /* block */)a1;
- (void)selectContactWithCompletion:(id /* block */)a0;
- (void)callAppPayPayInfo:(id)a0 completion:(id /* block */)a1;
- (void)launchSearchExtData:(id)a0 completion:(id /* block */)a1;
- (id)getSearchtExtraSessionDataWithError:(id *)a0;
- (void)onEcsGiftResendCompletedResult:(id)a0 error:(id *)a1;
- (void)onAddressEditEnd:(id)a0;
- (void)OnSelectSession:(id)a0 SessionSelectController:(id)a1;
- (void)sendLocalGiftMessageMsgXml:(id)a0 recipientUserName:(id)a1 completion:(id /* block */)a2;
- (void)enableGiftPageSwipeWithError:(id *)a0;
- (void)publishEscGiftNotifyEventEventType:(long long)a0 eventData:(id)a1 error:(id *)a2;
- (void)markBoxUnwrapGiftMsgId:(id)a0 sendType:(long long)a1 error:(id *)a2;
- (void)publishEcsGiftOpenEventEventType:(long long)a0 eventId:(id)a1 eventData:(id)a2 completion:(id /* block */)a3;
- (void)updateEcsGiftMsgStatusGiftMsgId:(id)a0 statusInfo:(id)a1 completion:(id /* block */)a2;
- (id)getEcsGiftImgCacheDirectoryWithError:(id *)a0;
- (void)nativeRouterRequest:(id)a0 completion:(id /* block */)a1;
- (void)getAllAddressFromGiver:(BOOL)a0 completion:(id /* block */)a1;
- (void)addNewAddressFromGiver:(BOOL)a0 completion:(id /* block */)a1;
- (void)editAddressAddress:(id)a0 fromGiver:(BOOL)a1 completion:(id /* block */)a2;
- (void)AddressInfoCancel;
- (void)notifyAddress:(id)a0;
- (void)OnGetAllAddress:(id)a0 UserName:(id)a1 NickName:(id)a2 Error:(id)a3;
- (void)OnModifyAddress:(id)a0 Error:(id)a1;
- (id)WCAddress2EcsAddress:(id)a0;
- (int)midasPayResultCode2PaymentActionType:(long long)a0;
- (void).cxx_destruct;

@end
