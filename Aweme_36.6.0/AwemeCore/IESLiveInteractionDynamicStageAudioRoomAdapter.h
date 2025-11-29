@class HTSEventContext, NSString, IESLiveComponentContext;
@protocol IESLiveMultiAudioSceneControllerDataSource, IESLiveMultiAudioSceneControllerDelegate, IESLiveRoomService, IESLiveInteractionLinkerService;

@interface IESLiveInteractionDynamicStageAudioRoomAdapter : IESLiveInteractionDynamicStage <IESLiveInteractionDynamicStageDataSource, IESLiveMultiAudioSceneControllerProtocol>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (weak, nonatomic) id<IESLiveMultiAudioSceneControllerDataSource> audioDataSource;
@property (weak, nonatomic) id<IESLiveMultiAudioSceneControllerDelegate> delegate;
@property (weak, nonatomic) id<IESLiveInteractionLinkerService> linker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allSeatProviderViews;
- (id)interactAllUsersList;
- (id)emojiContainerForUserID:(id)a0 isInteractiveEmoji:(BOOL)a1;
- (void)updateGuestListWithAppData:(id)a0;
- (void)willLoad;
- (void)updateAnchorInfo:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfSlotView;
- (id)bgContainer;
- (void)updateWithList:(id)a0;
- (id)emojiContainerForUserID:(id)a0;
- (void)willUnLoad;
- (void)onAudioClick:(long long)a0 clickType:(unsigned long long)a1;
- (void)addLayoutSlotsToSuperView;
- (id)roomThemeUpdater;
- (void)sceneControllerInit;
- (void)sceneWillLoad;
- (void)sceneWillUnload;
- (void)updateGuestList:(id)a0;
- (void)updateRootPanelViewModel:(id)a0;
- (void)didClickTopRightBtn;
- (BOOL)couldChangePosition;
- (void).cxx_destruct;
- (id)layout;
- (id)initWithDataSource:(id)a0 delegate:(id)a1;

@end
