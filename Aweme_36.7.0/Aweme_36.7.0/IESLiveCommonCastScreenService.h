@class NSMapTable, IESLiveCommonCastScreenRunner, IESLiveCommonCastScreenStreamHandler, IESLiveCommonCastScreenViewHandler, UIView, NSString;
@protocol IESLiveCommonCastScreenBusiness;

@interface IESLiveCommonCastScreenService : IESLiveGeneralBaseService <IESLiveCommonCastScreenService, IESLiveCommonCastScreenTracker, IESLiveCommonCastScreenStreamDelegate, IESLiveCommonCastScreenViewHandlerDelegate, IESLiveCommonCastScreenBusinessDelegate>

@property (retain, nonatomic) id<IESLiveCommonCastScreenBusiness> business;
@property (retain, nonatomic) UIView *elementView;
@property (retain, nonatomic) NSMapTable *registerHandler;
@property (retain, nonatomic) IESLiveCommonCastScreenViewHandler *viewHandler;
@property (retain, nonatomic) IESLiveCommonCastScreenRunner *runner;
@property (retain, nonatomic) IESLiveCommonCastScreenStreamHandler *streamHandler;
@property (copy, nonatomic) id /* block */ customTrackingBlock;
@property (nonatomic) BOOL isPaused;
@property (nonatomic) long long initilizeBusinessUIStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)addScreenCastWithBusiness:(id)a0 complete:(id /* block */)a1;
- (void)startScreenCastWithComplete:(id /* block */)a0;
- (void)startScreenCastWithRunnerComplete:(id /* block */)a0 complete:(id /* block */)a1;
- (void)stopScreenCastWithComplete:(id /* block */)a0;
- (void)stopScreenCastWithRunnerComplete:(id /* block */)a0 complete:(id /* block */)a1;
- (void)forceStopScreenCastWithComplete:(id /* block */)a0;
- (BOOL)isCastScreening;
- (BOOL)isForbiddenReversalPlayer;
- (BOOL)roomHasCastScreenInHistory;
- (void)registerCastScreenWithElementHandler:(id)a0 elementType:(unsigned long long)a1;
- (void)unregisterCastScreenWithElementType:(unsigned long long)a0;
- (id)getCastScreenElementHandlerWithType:(unsigned long long)a0;
- (id)streamer;
- (BOOL)shouldContinueCastingFromSingleLiveToInteract;
- (void)pauseScreenCast;
- (void)resumeScreenCastWithFirstFrame:(struct __CVBuffer { } *)a0;
- (BOOL)isCastScreenPaused;
- (id)castScene;
- (id)castBizValue;
- (BOOL)shouldHideEndButton;
- (void)trackerWithEvent:(id)a0 extra:(id)a1;
- (void)castScreenSuccessToast;
- (void)cacheCastScreenEvent;
- (void)stopScreenCastWithComplete:(id /* block */)a0 isClickedToStop:(BOOL)a1;
- (void)stopScreenCastWithResComplete:(id /* block */)a0 isClickedToStop:(BOOL)a1;
- (void)stopScreenCastWithRunnerComplete:(id /* block */)a0 isClickedToStop:(BOOL)a1 complete:(id /* block */)a2;
- (struct CGSize { double x0; double x1; })elementSizeWithElementType:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })castCameraSize;
- (double)castCameraRightPadding;
- (double)castCameraBottomPadding;
- (id)fetchElementViewWithElementType:(unsigned long long)a0;
- (void)updateCommonCastScreenWithElementType:(unsigned long long)a0 elementSize:(struct CGSize { double x0; double x1; })a1;
- (void)showCommonCastScreenElementWithType:(unsigned long long)a0 needShow:(BOOL)a1;
- (void)closeCommonCastScreenElementViewWithType:(unsigned long long)a0;
- (void)castScreenContainerDidClickStop;
- (void)castScreenDidChangeUIStatus:(long long)a0;
- (void)castScreenReturnButtonDidClick;
- (long long)castScreenInitializeBusinessUIStatus;
- (void)business:(id)a0 uiStatusDidChange:(long long)a1;
- (void)business:(id)a0 sendFrameBuffer:(struct __CVBuffer { } *)a1 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)business:(id)a0 backgroundImage:(id)a1;
- (void)business:(id)a0 castBusinessIcon:(id)a1;
- (void)businessDidStartCasting:(id)a0;
- (void)businessDidEndCasting:(id)a0;
- (void)business:(id)a0 anchorScreenStatusChange:(long long)a1;
- (void).cxx_destruct;
- (id)cachedKey;

@end
