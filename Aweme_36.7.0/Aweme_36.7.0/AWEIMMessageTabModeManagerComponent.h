@class NSArray, NSSet, AWEIMComponentBase, NSString, NSObject, AWEIMComponentManager;
@protocol AWEIMMessageTabModeProviderComponentProtocol, OS_dispatch_semaphore;

@interface AWEIMMessageTabModeManagerComponent : AWEIMComponentBase <AWEUserMessage, AWEIMComponentContainer, AWEIMComponentManagerDependency, AWEIMMessageTabModeProviderManagerInterface, AWEIMComponentDIServiceProviderProxy>

@property (copy) NSArray *modeProviderComponents;
@property (copy) NSArray *enablingModeProvidersSortedInPriority;
@property (nonatomic) unsigned long long currentMessageTabMode;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphoreLock;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *messageTabModeInitializationLock;
@property (nonatomic) BOOL hasCalculateMessageTabModeForThisAccount;
@property (copy, nonatomic) NSSet *selectorsForAWEIMMessageTabModeInterface;
@property (retain, nonatomic) AWEIMComponentBase<AWEIMMessageTabModeProviderComponentProtocol> *defaultBaseModeProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)recalculateMessageTabMode;
- (unsigned long long)lastResolvedMessageTabMode;
- (void)__recalculateMessageTabModeWithNotification:(BOOL)a0 forceRefresh:(BOOL)a1;
- (void)__initiateMessageTabModeIfNecessary;
- (void)__userDidLoginFirstUpdateCurrentFullUser;
- (id)forwardingProtocols;
- (void).cxx_destruct;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)dealloc;
- (void)doNothing;

@end
