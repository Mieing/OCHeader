@class UIImageView, NSString, RTVInteractionAvatarView;
@protocol RTVSessionPreviewProcotol, RTVXRInteractionController, RxInjector, RTVXRControllerInjector, RTVXRCaptureController;

@interface RTVFeedNarrowView : UIView <RTVXRCaptureControllerObserver, RTVXRInteractionObserver, RTVInteractionNarrowContentView>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVSessionPreviewProcotol> session;
@property (readonly, weak, nonatomic) id<RTVXRInteractionController> interactionController;
@property (readonly, weak, nonatomic) id<RTVXRCaptureController> captureController;
@property (readonly, nonatomic) RTVInteractionAvatarView *avatarView;
@property (readonly, nonatomic) UIImageView *sharingIndicator;
@property (copy, nonatomic) NSString *currentSpeakingUserID;
@property (nonatomic) unsigned long long audioVolumeCallbackCountForSpeakerChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)__configComponents;
- (void)__createDependencies;
- (void)__observe;
- (void)__updateComponentsWithSharingUserID:(id)a0 displaySharingIndicator:(BOOL)a1;
- (void)__currentSpeakingUserChanged;
- (void)xrCaptureController:(id)a0 didReceiveSpeakerAudioVolumUpdates:(id)a1 totalVolume:(unsigned long long)a2;
- (void)interactionController:(id)a0 didChangeToBizModel:(id)a1 ofInteractionType:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
