@interface IESLiveAnchorToolsModuleABInterface : NSObject

+ (id)anchorTaskRouterWithDiContext:(id)a0;
+ (BOOL)isCameraMirroredWithDiContext:(id)a0;
+ (BOOL)isEnableMirrorWithDiContext:(id)a0;
+ (void)toggleCameraMirrorWithDiContext:(id)a0;
+ (void)toggleChooseClarityWithDiContext:(id)a0;
+ (BOOL)isLivePausedWithDiContext:(id)a0;
+ (BOOL)inAnchorVideoPlayModeWithDiContext:(id)a0;
+ (id)noticeRouterWithDiContext:(id)a0;
+ (id)administerPrivilegeRouterWithDiContext:(id)a0;
+ (BOOL)isEnableDynamicClarityWithDiContext:(id)a0;
+ (void)pauseLiveWithNoLimitWithDiContext:(id)a0;
+ (void)resumeLiveWithDiContext:(id)a0;
+ (void)updatePushStreamConfig:(id)a0 type:(id)a1 diContext:(id)a2;
+ (id)stickerInterfaceWithDiContext:(id)a0;
+ (id)currentPlayingVideoIDWithDiContext:(id)a0;
+ (void)startPlayVideoPersonalVideoWithDict:(id)a0 diContext:(id)a1;
+ (void)stopPlayVideoPersonalVideoWithDiContext:(id)a0;
+ (id)getSetAdminAuthorityVCInWhiteStyle:(BOOL)a0 height:(double)a1 isBottomType:(BOOL)a2 diContext:(id)a3;
+ (void)addLocationObseverWithPiper:(id)a0 diContext:(id)a1;
+ (id)interactPluginInterfaceWithDiContext:(id)a0;
+ (id)virtualLiveGuideRouterWithDiContext:(id)a0;

@end
