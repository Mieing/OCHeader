@class NSString;

@interface IESLiveAnchorGuideModule : IESLiveModule <IESLiveAnchorGuideService, IESLiveAnchorGuideModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)announcementService;
- (id)guidePromptRouter;
- (id)introductionServiceInterface;
- (BOOL)isResumeRequestChecking;
- (id)chatroomResumeModel;
- (BOOL)canSetCameraActive;
- (id)getFansInfoPromptShowData;
- (id)getTrackSubscene:(long long)a0;
- (id)provideServices;
- (id)permissionApplyServiceInterface;
- (id)preAnnouncementInterface;
- (id)anchorTimeSchedulePreference;
- (Class)anchorGuideABManager;
- (void)setCameraActive:(BOOL)a0;

@end
