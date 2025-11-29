@class UIViewController, BDLOCNativeGameInstance, NSTimer, IESLiveLGameAudienceMessageImpl, NSString, IESLiveLGameAudienceModel;
@protocol IESLiveSmallWindowService, IESLiveLGameAudienceAppInstanceDelegate;

@interface IESLiveLGameAudienceAppInstance : NSObject <HTSLiveStreamPlayerAction, BDLOCNativeGameInstanceDelegate, IESLiveLGameAudienceMessageDelegate>

@property (nonatomic) BOOL shouldShowInstantPlayGuide;
@property (weak, nonatomic) UIViewController *gameController;
@property (retain, nonatomic) BDLOCNativeGameInstance *gameInstance;
@property (retain, nonatomic) IESLiveLGameAudienceModel *audienceModel;
@property (retain, nonatomic) NSTimer *closeSmallWindowTimer;
@property (weak, nonatomic) id<IESLiveSmallWindowService> smallWindowService;
@property (retain, nonatomic) IESLiveLGameAudienceMessageImpl *messageImpl;
@property (nonatomic) BOOL gameClosed;
@property (weak, nonatomic) id<IESLiveLGameAudienceAppInstanceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)updateSchema:(id)a0;
- (void)playerMediaSizeDidChange:(struct CGSize { double x0; double x1; })a0;
- (void)app:(id)a0 didReceiveMessage:(id)a1 callback:(id /* block */)a2;
- (void)app:(id)a0 viewWillAppear:(id)a1;
- (void)app:(id)a0 viewDidAppear:(id)a1;
- (void)app:(id)a0 viewWillDisappear:(id)a1;
- (void)app:(id)a0 viewDidDisappear:(id)a1;
- (void)appFirstFrameDidShow:(id)a0;
- (void)appWarmBootDone:(id)a0;
- (void)appWorkBeforeClose:(id)a0 closeType:(id)a1;
- (void)app:(id)a0 orientationChange:(long long)a1;
- (void)appEnterFullScreen:(id)a0;
- (void)appEnterSmallScreen:(id)a0;
- (BOOL)liveIsTop;
- (void)buildMessageImpl;
- (BOOL)isSameGame:(id)a0;
- (void)cleanGameCache;
- (void)showSmallWindow:(id)a0 slient:(BOOL)a1;
- (void)registerSmallWindowBlk;
- (BOOL)topVCIsGame;
- (void)refreshSmallWindow;
- (void)showSmallWindow:(id)a0;
- (BOOL)isAnchorLandscape;
- (void)closeSmallWindow:(id)a0;
- (void)showAudienceInstantPlayGuide;
- (id)initWithModel:(id)a0 schema:(id)a1;
- (void).cxx_destruct;
- (void)resetTimer;
- (void)launch;
- (long long)orientation;
- (void)dealloc;
- (void)updateModel:(id)a0;

@end
