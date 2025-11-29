@protocol RxInjector, RTVUserProfileManagerInterface;

@interface RTVVoipNotifyViewDataService : NSObject

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;

- (void)rxAwakeFromPropertyInjection;
- (id)avatarURLListAndDisplayNameWithModel:(id)a0;
- (id)__avatarURLListAndDisplayNameWithVoip1v1Model:(id)a0;
- (id)__avatarURLListAndDisplayNameWithGroupVoipModel:(id)a0;
- (id)__avatarURLListAndDisplayNameWithGroupVoipModelFromCache:(id)a0;
- (id)__avatarURLListAndDisplayNameWithUserIMID:(id)a0;
- (id)avatarURLListAndDisplayNameWithModelFromCache:(id)a0;
- (void).cxx_destruct;

@end
