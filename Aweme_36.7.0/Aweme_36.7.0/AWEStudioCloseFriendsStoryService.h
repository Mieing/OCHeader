@class NSString;

@interface AWEStudioCloseFriendsStoryService : NSObject <ACCStudioCloseFriendsStoryServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldShowGuide;
- (BOOL)isNewFriendsDailyPublishPanelExperimentStatusWithPublishModel:(id)a0;
- (id)guideSubtitle;
- (BOOL)forbidYoungForPublishing;
- (BOOL)needUpdatePublistButtonStyleWithPublishModel:(id)a0;
- (id)publishButtonTitleWithPublishModel:(id)a0;
- (BOOL)isCloseFriendsSelectedWithPublishModel:(id)a0;
- (BOOL)isFriendsSelectedWithPublishModel:(id)a0;
- (BOOL)isDarkColor:(id)a0;
- (BOOL)isYoungerThan24;
- (id)guideTitle:(id)a0;
- (void)guideDidShow;
- (unsigned long long)guideShowedTimes;
- (id)userCacheKey;

@end
