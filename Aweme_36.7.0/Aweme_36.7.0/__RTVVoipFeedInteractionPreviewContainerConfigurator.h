@class NSString;
@protocol RTVXRStateRecorder, RTVInteractionConfigureManagerInterface, RTVXRRoomSessionControllerInterface, RxInjector, RTVXRControllerInjector, RTVFeedSessionInterface;

@interface __RTVVoipFeedInteractionPreviewContainerConfigurator : NSObject <RTVInteractionPreviewContainerConfigurator, RTVInteractionControllerObserver>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, weak, nonatomic) id<RTVFeedSessionInterface> session;
@property (readonly, weak, nonatomic) id<RTVXRStateRecorder> xrStateRecorder;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> interactionConfigureManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)didChangeInteractionController:(id)a0 context:(id)a1;
- (BOOL)needBackground;
- (BOOL)autoAdjustPreviewScaleAccrodingToCameraOffStatus;
- (double)preferredSpacing;
- (unsigned long long)fullContentStyle;
- (unsigned long long)maxShowPreviewCount;
- (BOOL)needDisplayChatMessages;
- (id)extraMonitorInfo;
- (Class)previewControllerClass;
- (BOOL)needContainerTapGesture;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })fullContentInsets;
- (double)preferredHighlightHeight;
- (double)preferrdCameraOnHeight;
- (BOOL)__isBigRoom;
- (BOOL)__interfaceOrientationIsPortrait;
- (void).cxx_destruct;
- (double)preferredHeight;

@end
