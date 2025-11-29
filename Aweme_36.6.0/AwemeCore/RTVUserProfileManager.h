@class RxScheduler, NSMutableDictionary, NSString;
@protocol AWEIMUserManagerProtocol, RxInjector, RTVAccountServiceInterface;

@interface RTVUserProfileManager : NSObject <RTVAccountStateObserver, RTVUserProfileManagerInterface>

@property (retain, nonatomic) id<AWEIMUserManagerProtocol> userManager;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) NSMutableDictionary *userCacheMapper;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, nonatomic) id<RTVAccountServiceInterface> accountService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)accountDidLogout;
- (id)userModelWithUserID:(id)a0;
- (id)currentProfileIMID;
- (id)currentProfileSecID;
- (id)profileWithImID:(id)a0;
- (id)profileWithImID:(id)a0 ignoreCache:(BOOL)a1;
- (id)getConversationSecShortIdWithUserID:(id)a0;
- (id)getConversationIdWithUserID:(id)a0;
- (id)profileWithImIDFromCache:(id)a0;
- (id)profileWithSecUserID:(id)a0;
- (id)onlineStatusWithUseIDs:(id)a0 ignoreCache:(BOOL)a1;
- (id)onlineStatusWithUserSecIDs:(id)a0 ignoreCache:(BOOL)a1;
- (id)isEnableOnlineStatusForCurrentUser;
- (id)isOnlineForTimestamp:(double)a0;
- (id)fetchUserProfilesWithUserIDs:(id)a0;
- (void)__handleMemoryWarningNotification:(id)a0;
- (id)__currentUser;
- (id)__aweUserModelWithID:(id)a0 ignoreCache:(BOOL)a1;
- (id)__aweUserModelWithSecUserID:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)currentProfile;

@end
