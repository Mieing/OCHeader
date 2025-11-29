@class NSString, UIViewController;

@interface LiveHybridBlueGiftNativeApiFlutterPlugin : NSObject <MMFlutterPlugin, LiveHybridBlueGiftNativeApi>

@property (weak, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToViewController:(id)a0;
- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (id)currentFinderLiveTaskIfMatchMultiplatformTaskID:(id)a0;
- (void)fetchBlueGiftCreateOrderID:(id)a0 taskID:(id)a1 completion:(id /* block */)a2;
- (void)sendBlueGiftItemID:(id)a0 taskID:(id)a1 completion:(id /* block */)a2;
- (void)showSendPrizesHistoryTaskID:(id)a0 error:(id *)a1;
- (void)rememberHaveSignedGiveBlueGiftUserAgreementTaskID:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
