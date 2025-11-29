@class NSString;

@interface IESLiveAnchorToolsModule : IESLiveModule <IESLiveAnchorToolsModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resumeLive;
- (BOOL)isEnableDynamicClarity;
- (void)toggleChooseClarity;
- (void)updatePushStreamConfig:(id)a0 type:(id)a1;
- (id)customVideoBufferRouter;
- (id)noticeRouter;
- (id)administerPrivilegeRouter;
- (id)anchorTaskRouter;
- (id)interactEffectService;
- (BOOL)isLivePaused;
- (BOOL)isEnableMirror;
- (BOOL)isCameraMirrored;
- (void)toggleCameraMirror;
- (void)pauseLiveWithNoLimit;
- (id)stickerInterface;
- (BOOL)inAnchorVideoPlayMode;
- (id)currentPlayingVideoID;
- (void)startPlayVideoPersonalVideoWithDict:(id)a0;
- (void)stopPlayVideoPersonalVideo;
- (id)getSetAdminAuthorityVCInWhiteStyle:(BOOL)a0 height:(double)a1 isBottomType:(BOOL)a2;
- (void)addLocationObseverWithPiper:(id)a0;
- (id)calendarInterface;
- (id)interactPluginInterface;
- (id)virtualLiveGuideRouter;

@end
