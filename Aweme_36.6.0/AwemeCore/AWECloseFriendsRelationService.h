@class NSString;

@interface AWECloseFriendsRelationService : HTSService <AWECloseFriendsRelationService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableCloseFriendsDataRefactor;
- (Class)closeFriendsRelationTracker;
- (id)closeFriendsList;
- (id)closeFriendsState;
- (void)updateFamiliarSettings:(id)a0;
- (BOOL)enableCloseFriendsRelationUpgrade;
- (id)onboardingHelper;

@end
