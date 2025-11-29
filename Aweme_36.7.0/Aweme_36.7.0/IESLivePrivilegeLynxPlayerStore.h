@class HTSEventContext, NSString, UIView, IESLiveComponentContext, IESLiveGiftCanvasListenerManager;
@protocol IESHYContainerProtocol, IESLiveWebImageService, IESLiveRoomService, IESLivePrivilegeLynxPlayerViewProtocol;

@interface IESLivePrivilegeLynxPlayerStore : NSObject <IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *lynxPlayerView;
@property (weak, nonatomic) UIView<IESLivePrivilegeLynxPlayerViewProtocol> *containerView;
@property (nonatomic) BOOL lynxViewCreatedSuccess;
@property (retain, nonatomic) id<IESLiveWebImageService> webImageService;
@property (nonatomic) double startLoadTime;
@property (nonatomic) double containerLoadDuration;
@property (retain, nonatomic) IESLiveGiftCanvasListenerManager *canvasListenerManager;
@property (copy, nonatomic) id /* block */ playCompleteWithStats;
@property (nonatomic) long long lynxLoadFailed;
@property (nonatomic) BOOL enableMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidConstructJSRuntime:(id)a0;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)destroyLynxPlayerView;
- (void)clearCurrentContainerView;
- (id)createLynxPlayerView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 initData:(id)a2 playCompleteWithStats:(id /* block */)a3;
- (id)initWithRoom:(id)a0 componentContext:(id)a1 trackContext:(id)a2;
- (void)addPerfListener:(id)a0 createTime:(double)a1;
- (void)stopPerfListener;
- (void).cxx_destruct;

@end
