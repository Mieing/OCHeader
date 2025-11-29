@class NSString;

@interface WAAppDetailInfoManager : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestAuthorizationInfoForApp:(id)a0;
- (void)modAuthorizationInfoForApp:(id)a0 list:(id)a1 ReceiveMsgStatusChanged:(BOOL)a2 FinalReceiveMsgStatusAllow:(BOOL)a3;
- (void)requestDeleteAppUseUserInfo:(id)a0;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;
- (void)handleAppGetAuthInfoResponse:(id)a0;
- (void)handleAppModAuthInfoResponse:(id)a0;
- (void)handleDeleteUserAuthInfoResponse:(id)a0;
- (void)sendRequest:(id)a0 Retry:(unsigned int)a1;

@end
