@class NSOrderedSet, NSSet, RTVInteractionPreviewListView, NSString;
@protocol RTVChatController, RTVXRRoomSessionControllerInterface, RTVInteractionPreviewContainerConfigurator, RTVXRControllerInjector, RTVInteractionPreviewContainerMessageController, RTVXRStateRecorder, RTVSettingsManager, RTVXRCaptureController, RTVUserProfileManagerInterface;

@interface RTVInteractionPreviewContainerPariticipantsController : NSObject <RTVXRRoomSessionControllerObserver, RTVInteractionPreviewListViewLayoutDelegate, RTVXRCaptureControllerObserver, RTVChatControllerObserver, RTVInteractionPreviewContainerPariticipantsController>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, weak, nonatomic) id<RTVInteractionPreviewContainerConfigurator> previewContainerConfigure;
@property (readonly, weak, nonatomic) id<RTVXRCaptureController> captureController;
@property (readonly, weak, nonatomic) id<RTVChatController> chatController;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, weak, nonatomic) id<RTVInteractionPreviewContainerMessageController> messageController;
@property (readonly, weak, nonatomic) id<RTVXRStateRecorder> xrStateRecorder;
@property (readonly, weak, nonatomic) id<RTVSettingsManager> rtvSettingsManager;
@property (copy, nonatomic) NSOrderedSet *currentParticipants;
@property (copy, nonatomic) NSOrderedSet *currentPreviewItems;
@property (copy, nonatomic) NSSet *displayingPariticpants;
@property (retain, nonatomic) RTVInteractionPreviewListView *previewListView;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL allParticipantCameraOff;
@property (nonatomic) long long maxNumberOfShowingPreview;
@property (copy, nonatomic) NSString *insertedUserID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)didChangeInteractionController:(id)a0 context:(id)a1;
- (void)rtvSession:(id)a0 contextKeyPathChange:(id)a1 fromValue:(id)a2 toValue:(id)a3;
- (void)rtvSession:(id)a0 participatorsDidChange:(id)a1 oldParticipators:(id)a2;
- (double)preferredSpacing;
- (double)preferredHighlightHeight;
- (void)didReceiveNewMessages:(id)a0;
- (void)bindView:(id)a0;
- (void)changeToActive:(BOOL)a0 needReRenderPreviews:(BOOL)a1;
- (unsigned long long)preferredContainerPositionYStyle;
- (void)xrCaptureController:(id)a0 didReceiveSpeakerAudioVolumUpdates:(id)a1 totalVolume:(unsigned long long)a2;
- (BOOL)__hasParticipantsChanged;
- (BOOL)__needHandleCameraStateSwitch;
- (void)__reloadWithAnimated:(BOOL)a0;
- (unsigned long long)__previewStyle;
- (BOOL)__isAllCameraOffWithParticipators:(id)a0;
- (id)__previewItemsWithParticipators:(id)a0;
- (id)__previewItemsForInsertedUserID:(id)a0;
- (id)__postProcessPreviewItems:(id)a0;
- (void)__refreshComponentsWithNewParticipants:(id)a0;
- (void)__updateInsertedUserID:(id)a0;
- (void).cxx_destruct;
- (double)preferredHeight;
- (void)dealloc;

@end
