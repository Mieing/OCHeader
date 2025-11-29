@class NSString;

@interface AFDUserProfileService : HTSService <AFDUserProfileService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fansSearchManager;
- (void)cacheGuideInfoForEmptyPostWork;
- (id)getEmptyPostWorkGuideInfo;
- (BOOL)hasCachedEmptyPostWorkGuideInfo;
- (void)trackRemoveFriendsEventWithTrackType:(unsigned long long)a0 referString:(id)a1 userID:(id)a2 enterMethod:(id)a3 otherTrackParams:(id)a4;
- (void)postFromPostWorkGuide;
- (Class)awePrivateSharedPostsViewControllerClass;
- (id)contactFriendsSearchManager;
- (id)contactSearchManager;
- (id)remarkNameManager;
- (id)remarkNameAlert:(id)a0;
- (Class)remarkNameManagerClass;
- (id)attributedStringWithIntroducePlaceholder:(id)a0;
- (id)makeUserProfileURLStringWithURLString:(id)a0 model:(id)a1 author:(id)a2;
- (void)saveFShareTaskToken:(id)a0;
- (BOOL)hasFShareTaskCurrentDay;
- (void)tryLoadFShareTaskRedPocket;
- (void)saveUserProfileEnterFrom;
- (BOOL)checkNeedForceLandLikeTab;
- (id)createEmptyRecommendViewControllerWithUserID:(id)a0;
- (id)p_generateFShareTokenKey;

@end
