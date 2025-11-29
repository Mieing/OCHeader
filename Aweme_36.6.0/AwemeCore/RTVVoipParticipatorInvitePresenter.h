@class NSString;
@protocol RxInjector, RTVTopViewControllerInterface;

@interface RTVVoipParticipatorInvitePresenter : NSObject <RTVVoipParticipatorInvitePresenterInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVTopViewControllerInterface> topVCGetter;
@property (nonatomic) BOOL needResignCurrentKeyWindowWhenDismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadRTVAdapterClass;

- (void)rxAwakeFromPropertyInjection;
- (id)inviteGroupParticipatorWithContext:(id)a0;
- (id)inviteGroupParticipatorWithContext:(id)a0 dismissCompletion:(id /* block */)a1;
- (id)inviteFriendsWithContext:(id)a0;
- (id)inviteFriendsWithContext:(id)a0 dismissCompletion:(id /* block */)a1;
- (id)aAWEPadRTVAdapter;
- (id)__topViewController;
- (void)__presentViewController:(id)a0 withStyle:(long long)a1;
- (void)__dismissViewController:(id)a0 completion:(id /* block */)a1;
- (BOOL)__isCurrentUserAParticipantInConversation:(id)a0;
- (void).cxx_destruct;

@end
