@class NSString;

@interface IESLiveAnchorGuideModule : IESLiveModule <IESLiveAnchorGuideService, IESLiveAnchorGuideModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)announcementService;
- (id)guidePromptRouter;
- (id)permissionApplyServiceInterface;
- (id)anchorTimeSchedulePreference;
- (id)preAnnouncementInterface;
- (Class)anchorGuideABManager;
- (id)introductionServiceInterface;
- (BOOL)isResumeRequestChecking;
- (id)chatroomResumeModel;
- (BOOL)canSetCameraActive;
- (id)getFansInfoPromptShowData;
- (id)getTrackSubscene:(long long)a0;
- (id)provideServices;
- (void)setCameraActive:(BOOL)a0;

@end
