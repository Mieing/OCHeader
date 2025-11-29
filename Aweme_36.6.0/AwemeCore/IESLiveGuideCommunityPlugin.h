@class NSString, IESLiveGuideContainerContext;

@interface IESLiveGuideCommunityPlugin : IESLiveContainerBasePlugin <IESLiveGuidePreviewRoomService, IESLiveGuideDirectorStartRoomService>

@property (retain, nonatomic) IESLiveGuideContainerContext *containerContext;
@property (copy, nonatomic) id /* block */ hideBottomBarHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentFirstFrameDidStartLoad;
- (void)updateBottomBarStatus:(BOOL)a0;
- (void)enterDirectorViewController:(id)a0;
- (void)didLoad:(id)a0;
- (void)willDestroy:(id)a0;
- (void)subscribeExecutionMessage;
- (void)handleFisheye;
- (void)sendCloseGuideVCMessage;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
