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
- (id)getSetAdminAuthorityVCInWhiteStyle:(BOOL)a0 height:(double)a1 isBottomType:(BOOL)a2;
- (BOOL)isEnableMirror;
- (BOOL)isCameraMirrored;
- (void)toggleCameraMirror;
- (BOOL)isLivePaused;
- (void)pauseLiveWithNoLimit;
- (id)noticeRouter;
- (id)administerPrivilegeRouter;
- (id)anchorTaskRouter;
- (id)stickerInterface;
- (BOOL)inAnchorVideoPlayMode;
- (id)currentPlayingVideoID;
- (void)startPlayVideoPersonalVideoWithDict:(id)a0;
- (void)stopPlayVideoPersonalVideo;
- (void)addLocationObseverWithPiper:(id)a0;
- (id)interactPluginInterface;
- (id)virtualLiveGuideRouter;
- (id)customVideoBufferRouter;
- (id)calendarInterface;
- (id)interactEffectService;

@end
