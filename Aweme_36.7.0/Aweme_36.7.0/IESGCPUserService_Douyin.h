@class NSString;

@interface IESGCPUserService_Douyin : NSObject <IESGCPUserService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPersonalRecommendSwitchOn;
- (id)currentLoginUser;
- (id)currentUserId;
- (void)loginWithUserInfo:(id)a0 completion:(id /* block */)a1;
- (void)loginWithUserInfo:(id)a0;
- (void)jumpToProfileWithUserId:(id)a0 secUserId:(id)a1 enterFrom:(id)a2 mobReport:(id)a3 followParams:(id)a4;
- (void)logout;
- (id)currentSessionID;
- (BOOL)isLogin;

@end
