@class UIImage, NSString;

@interface AWEVideoNewFriendsDailyService : HTSService <AWEVideoNewFriendsDailyService>

@property (retain, nonatomic) UIImage *avatarPhoto;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEDSStudioAdapterClass;

- (BOOL)isNewFriendsDailyPublishPanelExperimentStatusWithPublishModel:(id)a0;
- (id)getEditPageLastFrameWhenClickPublishWith:(id)a0;
- (id)aAWEDSStudioAdapter;
- (BOOL)isPublishPageNewFriendsExperimentStatusWithPublishModel:(id)a0 isAfterStatus:(BOOL)a1;
- (id)dontUsers;
- (id)publishBeforePanelFriendsRelativeList;
- (id)publishBeforePanelMateRelativeList;
- (void)cachePublishBeforePanelFriendsRelativeList:(id)a0;
- (void)cachePublishBeforePanelMateRelativeList:(id)a0;
- (BOOL)isNewStoryDailyPublishPageButtonStyleStatus;
- (BOOL)isNewStoryPublishPageToShowFriendsDailyButtonWithRepository:(id)a0;
- (id)publishPagePublishBtnText;
- (BOOL)supportPOIPromptCardWithModel:(id)a0;
- (BOOL)supportElementForNewFriendsDailyPublishPageStatus:(id)a0 publishModel:(id)a1;
- (void)cachedontUsersWithUids:(id)a0;
- (void)resetPublishBeforePanelFinishedStatus;
- (unsigned long long)friendsDailyPublishPanelSettingStyle;
- (void).cxx_destruct;

@end
