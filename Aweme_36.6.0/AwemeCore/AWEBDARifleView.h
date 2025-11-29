@class AWEAwemeModel, NSString, NSArray, AWEBDARifleViewDelegateProxy, AWEOriginalAdModel, NSMutableArray, AWEBDARifleViewConfiguration, BUPlayableAdJSBRegister;
@protocol AWEBDARifleViewDelegate;

@interface AWEBDARifleView : BDARifleView <BDAPUProtocol, AWEBDARifleViewDelegate, BUPlayableAdJSBRegisterDelegate, AWEBDARifleView>

@property (retain, nonatomic) AWEBDARifleViewConfiguration *config;
@property (retain, nonatomic) AWEBDARifleViewDelegateProxy *lifeDelegateProxy;
@property (weak, nonatomic) id<AWEBDARifleViewDelegate> realLifecycleDelegate;
@property (retain, nonatomic) BUPlayableAdJSBRegister *jsbRegister;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEOriginalAdModel *adModel;
@property (retain, nonatomic) NSArray *processors;
@property (retain, nonatomic) NSString *accessKey;
@property (retain, nonatomic) NSString *channel;
@property (retain, nonatomic) NSString *bundle;
@property (nonatomic) BOOL lynxLoadSuccess;
@property (nonatomic) BOOL lynxLoadFirstScreen;
@property (nonatomic) BOOL lynxJSRuntimeReady;
@property (nonatomic) double firstScreenLoadTime;
@property (retain, nonatomic) NSMutableArray *jsEventList;
@property (copy, nonatomic) id /* block */ sendJsEventListBlock;
@property (nonatomic) BOOL isFromLoki;
@property (nonatomic) BOOL isAnchorPagePreload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *currentURL;
@property (readonly, copy, nonatomic) NSString *containerID;
@property (weak, nonatomic) id<AWEBDARifleViewDelegate> lifecycleDelegate;
@property (copy, nonatomic) NSString *componentType;

- (void)sendEvent:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (void)handleBecomeActive;
- (void)handleResignActive;
- (void)updateAweme:(id)a0;
- (void)loadURL:(id)a0 withConfiguration:(id)a1;
- (void)updateScreenMetrics;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withAweme:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withAdModel:(id)a1;
- (id)getBDXLynxView;
- (id)lynxView;
- (void)jsbRegister:(id)a0 registerHandlerBlock:(id /* block */)a1 forJSMethod:(id)a2;
- (void)jsbRegister:(id)a0 fireEvent:(id)a1 params:(id)a2;
- (void)updateConfiguration:(id)a0 withURLString:(id)a1;
- (void)registerJSBPlugins;
- (void)loadSchemaModel:(id)a0 withConfiguration:(id)a1;
- (void)sendJSEventList;
- (id)adLynxBridges;
- (void)apuOpenAdLandPageLinks:(id)a0 callback:(id /* block */)a1;
- (void)apuSendAdLog:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
