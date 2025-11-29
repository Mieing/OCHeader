@class NSString;

@interface AWEStudio24StoryUtilsService : NSObject <AWEStudio24StoryUtilsServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)is24StoryWithPublishModel:(id)a0;
- (BOOL)isNewFriendsDailyPublishPanelExperimentStatusWithPublishModel:(id)a0;
- (id)getEditPageLastFrameWhenClickPublishWith:(id)a0;
- (BOOL)isPrivateDailyTypeWithPublishModel:(id)a0;
- (BOOL)isPublishPageNewFriendsExperimentStatusWithPublishModel:(id)a0 isAfterStatus:(BOOL)a1;
- (id)dontUsers;
- (id)publishBeforePanelFriendsRelativeList;
- (id)publishBeforePanelMateRelativeList;
- (void)cachePublishBeforePanelFriendsRelativeList:(id)a0;
- (void)cachePublishBeforePanelMateRelativeList:(id)a0;
- (BOOL)isStoryWithPublishModel:(id)a0;

@end
