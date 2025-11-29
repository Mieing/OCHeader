@class NSDictionary, NSString, AWEIMComponentManager;

@interface AWEIMStreakPetElfNoticeCardComponent : AWEIMFlexComponent <AWEIMComponentContainer, AWEIMComponentManagerDependency>

@property (copy, nonatomic) NSDictionary *cardConfig;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (id)getFlamePetElfInviteCardConfig;
- (void)onCardTapsWithGesture:(id)a0;
- (void)gotoAchievePage;
- (void)gotoInvitingFriendsToRaisePetElf;
- (void).cxx_destruct;

@end
