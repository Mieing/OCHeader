@class IESLiveMediaContainerContext, HTSLiveRecordCameraProcesser;
@protocol IESLiveRecoder;

@interface IESLiveMediaCameraModule : IESLiveMediaExecutionBaseModule

@property (retain, nonatomic) IESLiveMediaContainerContext *containerContext;
@property (retain, nonatomic) HTSLiveRecordCameraProcesser *cameraProcessor;
@property (retain, nonatomic) id<IESLiveRecoder> recoder;

- (void)onAppWillResignActive;
- (void)onAppBecomeActive;
- (void)loadVideoEffectProcessor;
- (void)subscribeExecutionMessage;
- (void)initialize:(id)a0 params:(id)a1;
- (void)viewDidDestroy:(id)a0 params:(id)a1;
- (void)viewDidAppear:(id)a0 params:(id)a1;
- (void)closeMediaPreviewRoom:(BOOL)a0;
- (void)startNormalLive;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
