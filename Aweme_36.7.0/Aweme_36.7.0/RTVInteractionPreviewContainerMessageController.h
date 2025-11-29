@class RTVInteractionMessageBubbleViewModelTransformer, RTVInteractionPreviewListView, RTVFIFOBaseCollection, NSTimer, NSString;
@protocol RTVChatController, RTVMonitor, RTVInteractionConfigureManagerInterface, RxInjector, RTVXRControllerInjector;

@interface RTVInteractionPreviewContainerMessageController : NSObject <RTVChatControllerObserver, RTVInteractionPreviewContainerMessageController>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> configureManager;
@property (readonly, weak, nonatomic) id<RTVChatController> chatController;
@property (retain, nonatomic) RTVInteractionPreviewListView *previewListView;
@property (retain, nonatomic) RTVFIFOBaseCollection *displayingBubbleViewModels;
@property (retain, nonatomic) NSTimer *pollCheckBubblesTimer;
@property (retain, nonatomic) RTVInteractionMessageBubbleViewModelTransformer *bubbleModelTransformer;
@property (readonly, nonatomic) id<RTVMonitor> rtvMonitor;
@property (nonatomic) unsigned long long numberOfReceivedMessages;
@property (nonatomic) unsigned long long numberOfDroppedMessages;
@property (nonatomic) unsigned long long numberOfDisplayedMessages;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) RTVFIFOBaseCollection *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)didReceiveNewMessages:(id)a0;
- (void)__hmdTrackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)bindView:(id)a0;
- (void)notifyCanShowMesage:(BOOL)a0;
- (void)showMessages:(id)a0;
- (void)__reportMonitorInfo;
- (unsigned long long)__maxNumberOfDisplayingBubbles;
- (void)__resumeOrSuspendBubblePollingTimer;
- (void)__showMessages:(id)a0;
- (void)__updateDisplayBubblesIfNeeded;
- (unsigned long long)__checkTimeoutBubbles;
- (void)__dismissBubblesWithViewModels:(id)a0;
- (void)__readAndDisplayMessagesBasedOnValidCapacity;
- (double)__squashedTimeoutTime;
- (double)__normalTimeoutTime;
- (unsigned long long)__calculateMessageBubbleDirection;
- (void)__checkBubbleIsOnScreen:(id)a0;
- (void)__showBubblesWithViewModels:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
