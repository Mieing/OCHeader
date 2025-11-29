@class MMWebViewController, NSString, MinimizeTaskData;
@protocol MMWebMultiContentHandlerDelegate;

@interface MMWebMultiContentHandler : MinimizeTaskBaseLogicController <IMinimizeTaskDelegateInterface, WCAudioModuleDelegate, MinimizeTaskStateInfoDelegate> {
    BOOL _isListeningAudioPlayPause;
}

@property (retain, nonatomic) MMWebViewController *webVC;
@property (retain, nonatomic) MinimizeTaskData *taskData;
@property (nonatomic) BOOL isShowCurVC;
@property (weak, nonatomic) id<MMWebMultiContentHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getBizKeyWithWebVC:(id)a0;
+ (id)getPassiveTaskBizKeyWithWebVC:(id)a0;
+ (void)requestIsWebVCPlaying:(id)a0 completion:(id /* block */)a1;

- (id)initWithTask:(id)a0;
- (id)initWithTask:(id)a0 delegate:(id)a1;
- (void)clearContextData;
- (void)onPlayPauseBtnClicked:(id)a0 isToPlay:(BOOL)a1;
- (void)setWebViewMediaPlaybackPlay:(BOOL)a0;
- (void)onCloseBtnClicked:(id)a0;
- (BOOL)isMinimizeTaskPlaying:(id)a0;
- (BOOL)addWindowTaskAnimiated:(BOOL)a0 webVC:(id)a1;
- (BOOL)addWindowTaskAnimiated:(BOOL)a0 webVC:(id)a1 taskData:(id)a2;
- (BOOL)isPassive;
- (BOOL)tryUpdateMinimizeSnapShot:(id)a0;
- (void)removeWindowTaskAnimiated:(BOOL)a0 onlyFade:(BOOL)a1;
- (BOOL)hasMinimizeTask;
- (id)getBizKey;
- (void)cancelMediaPlaybackSuspendedState;
- (BOOL)onEnterMinimizedTask:(id)a0 openContext:(id)a1 taskEnterScene:(unsigned int)a2;
- (void)onRemoveMinimizedTask:(id)a0;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)a0;
- (void)requestIsTaskPlaying:(id)a0 completion:(id /* block */)a1;
- (void)addWebViewToForeground;
- (void)putWebViewBack;
- (void)invokeJSElementPlay;
- (void)requestIsLastPlaybackEnded:(id /* block */)a0;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void)startListeningAudioPlayPause;
- (void)stopListeningAudioPlayPause;
- (void)onSilenceSecondaryAudioHint:(id)a0;
- (void)onWebviewMediaPlaybackStart;
- (void)onWebviewMediaPlaybackEnd;
- (void).cxx_destruct;

@end
