@class NSString;

@interface WCInnerJumpMgr : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleInactiveAPNSPushWithUsrInfo:(id)a0;
- (void)handleBackgroundAPNSPushWithUsrInfo:(id)a0;
- (void)handleApnsNotificationPushWithUsrInfo:(id)a0;
- (void)handleLocalPushWithUsrInfo:(id)a0;
- (void)gotoWebViewController:(id)a0;

@end
