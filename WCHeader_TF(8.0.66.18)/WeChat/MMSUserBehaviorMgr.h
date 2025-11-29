@class NSString;

@interface MMSUserBehaviorMgr : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)dealloc;
- (void)onServiceClearData;
- (void)didTakeScreenshot:(id)a0;
- (void)didWebTakeScreenshot:(id)a0 viewController:(id)a1;
- (void)didChatTakeScreenshot:(id)a0;
- (void)didPaidOrderDetailTakeScreenshot:(id)a0;
- (void)reportChatScreenshot:(id)a0;

@end
