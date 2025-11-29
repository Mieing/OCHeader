@class NSString, NSArray, HTSLiveShortTouchArea, IESLiveForwardEventView, UIView, NSMutableArray, IESLiveShortTouchActionMonitor;
@protocol IESLiveRoomService, IESHYContainerProtocol, IESLiveConfigurableShortTouchViewDelegate;

@interface IESLiveConfigurableShortTouchView : UIView <IESHYHybridViewLifecycleProtocol, BDXContainerLifecycleProtocol, HTSLivePluginLayoutView>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridView;
@property (retain, nonatomic) IESLiveForwardEventView *eventView;
@property (nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (nonatomic) BOOL didLoad;
@property (nonatomic) BOOL useLynx;
@property (retain, nonatomic) NSMutableArray *events;
@property (retain, nonatomic) NSMutableArray *cycleEvents;
@property (retain, nonatomic) NSArray *blockList;
@property (retain, nonatomic) NSArray *allowList;
@property (nonatomic) BOOL isHasFallback;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) unsigned long long type;
@property (weak, nonatomic) HTSLiveShortTouchArea *area;
@property (weak, nonatomic) id<IESLiveConfigurableShortTouchViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ reloadBlock;
@property (copy, nonatomic) id /* block */ insertBlock;
@property (weak, nonatomic) IESLiveShortTouchActionMonitor *shortTouchMonitor;
@property (nonatomic) double startLoadTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)switchWebViewBlankDetect:(BOOL)a0 webView:(id)a1;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forView:(id)a1;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)startShowAnimation:(id /* block */)a0;
- (void)registerBridgeHandler;
- (id)shakeAnimation;
- (void)notifyCycleEvent:(long long)a0;
- (void)notify:(id)a0 initial:(BOOL)a1;
- (void)notifyWithEvent:(id)a0 params:(id)a1;
- (void)renderWithUrl:(id)a0 initialData:(id)a1 preferredSize:(struct CGSize { double x0; double x1; })a2 fallbackURL:(id)a3 useLynx:(BOOL)a4;
- (void)configEventView;
- (id)appendQueryURLWithBaseUrl:(id)a0;
- (BOOL)isValidType:(id)a0;
- (void)doShakeAnimation;
- (void)callCycleEvent:(long long)a0;
- (void)reportLoadWithCode:(long long)a0 source:(id)a1;
- (void)renderFallbackWithUrl:(id)a0 initialData:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void).cxx_destruct;
- (id)viewType;
- (void)destroy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)loadData;

@end
