@class AWEGrouponLifeFeedsLynxPlugin, NSString, LynxView, UIView, AWEGrouponLifeFeedsPendingBlock;
@protocol AnnieXContainerBaseProtocol, AWEGrouponLifeFeedsLynxCardLifeCycleProtocol, AWEGrouponLifeFeedsLynxCardDelegate, AWEGrouponLifeFeedsLynxCardDataSource;

@interface AWEGrouponLifeFeedsLynxCard : NSObject <BDXContainerLifecycleProtocol, AWEGrouponLifeFeedsLynxCardProtocol>

@property (nonatomic) BOOL isPreload;
@property (nonatomic) long long state;
@property (retain, nonatomic) AWEGrouponLifeFeedsPendingBlock *pendingLifeCycles;
@property (weak, nonatomic) AWEGrouponLifeFeedsLynxPlugin *plugin;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *annieXView;
@property (weak, nonatomic) id<AWEGrouponLifeFeedsLynxCardDelegate> delegate;
@property (weak, nonatomic) id<AWEGrouponLifeFeedsLynxCardDataSource> dataSource;
@property (weak, nonatomic) id<AWEGrouponLifeFeedsLynxCardLifeCycleProtocol> lifeCycleDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *containerId;
@property (readonly, nonatomic) NSString *sessionId;
@property (readonly, weak, nonatomic) LynxView *lynxView;
@property (readonly, weak, nonatomic) UIView *cardView;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerOnTasmFinishByNative:(id)a0;
- (void)containerDidUpdate:(id)a0;
- (void)containerDidConstructJSRuntime:(id)a0;
- (void)preload:(id)a0;
- (void)reuse;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)setupLifeCycle;
- (void)setupCard;
- (void)containerDidLoaded:(id)a0;
- (id)initWithAnnieX:(id)a0 state:(long long)a1 plugin:(id)a2;
- (void).cxx_destruct;
- (void)updateData:(BOOL)a0;
- (id)init;
- (void)activate;
- (void)create;

@end
