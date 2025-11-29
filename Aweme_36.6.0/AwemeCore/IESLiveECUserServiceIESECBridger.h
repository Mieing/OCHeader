@class NSString;
@protocol IESLiveUserService;

@interface IESLiveECUserServiceIESECBridger : NSObject <IESLiveECUserService>

@property (retain, nonatomic) id<IESLiveUserService> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

- (id)registerFollowStatusChangedWithCallback:(id /* block */)a0;
- (void)loginWithUserInfo:(id)a0 completion:(id /* block */)a1;
- (void)subscribe:(id)a0 followStatusChangedWithCallback:(id /* block */)a1;
- (void)removeFollowStatusWithSubscriber:(id)a0;
- (id)registerLoginStatusChangedWithCallback:(id /* block */)a0;
- (void)subscribe:(id)a0 loginStatusChangedWithCallback:(id /* block */)a1;
- (void)removeUserLoginStatusWithSubscriber:(id)a0;
- (void).cxx_destruct;
- (BOOL)isLogin;

@end
