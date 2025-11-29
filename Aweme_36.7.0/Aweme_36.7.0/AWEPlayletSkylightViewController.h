@class AWEPlayletSkyLightAnnieXCardView, NSString, NSTimer, BDXBridgeEventSubscriber, AWEPlayletSkyLightCatchView, AWEPlayletSkyLightCapsuleView, AWEPlayletPageContext;
@protocol AWEPlayletSkylightViewControllerDelegate;

@interface AWEPlayletSkylightViewController : UIViewController <AWEPlayletSkyLightCatchViewDelegate, AWEPlayletSkyLightCapsuleViewDelegate>

@property (retain, nonatomic) AWEPlayletSkyLightAnnieXCardView *lynxView;
@property (retain, nonatomic) NSTimer *timeoutTimer;
@property (nonatomic) double insertLynxDataTimeInterval;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *previousPage;
@property (nonatomic) long long rankNum;
@property (nonatomic) BOOL needHandleEvent;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (nonatomic) double lastContainerHeight;
@property (nonatomic) BOOL hasCollectAnnieViewOpenTime;
@property (weak, nonatomic) id<AWEPlayletSkylightViewControllerDelegate> delegate;
@property (retain, nonatomic) AWEPlayletSkyLightCatchView *catchView;
@property (retain, nonatomic) AWEPlayletSkyLightCapsuleView *capsuleView;
@property (retain, nonatomic) AWEPlayletPageContext *context;
@property (nonatomic) BOOL isSkylightShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCapsuleViewTouched;
- (void)onCatchViewTouched;
- (void)updateSkylightvisible:(BOOL)a0;
- (void)updateInsertData:(id)a0 needReload:(BOOL)a1 enterFrom:(id)a2 previousPage:(id)a3;
- (void)collectAnniexCardOpenTime;
- (void)showSkylight:(BOOL)a0 animated:(BOOL)a1;
- (void)onCatchViewPanned:(BOOL)a0;
- (BOOL)shouldHandleSkyLightEvent:(id)a0;
- (void)handleUpdatePlayletSkyViewEvent:(long long)a0;
- (void)skylightReadyTrack:(long long)a0;
- (void)updatePlayletSkyViewTimeout;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)addObservers;

@end
