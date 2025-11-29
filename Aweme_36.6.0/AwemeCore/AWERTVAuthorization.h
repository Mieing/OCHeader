@class RxDeferred, NSString;
@protocol RxInjector;

@interface AWERTVAuthorization : NSObject <RTVAuthorizationInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RxDeferred *privacyPolicyDeferred;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)authorizationStateWithType:(long long)a0;
- (id)privacyPolicyIsAgree;
- (void)__handlePrivacyPolicyAgreeNotification:(id)a0;
- (void).cxx_destruct;

@end
