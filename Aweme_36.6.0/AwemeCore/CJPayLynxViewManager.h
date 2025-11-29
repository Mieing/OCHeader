@class BDXBridgeEventSubscriber, NSMutableArray, NSString;

@interface CJPayLynxViewManager : NSObject <CJPayHybridViewPlugin>

@property (retain, nonatomic) NSMutableArray *containersArray;
@property (retain, nonatomic) BDXBridgeEventSubscriber *hybridViewEventSubscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)defaultService;

- (BOOL)p_isUrlInSettingsPathList:(id)a0;
- (BOOL)pluginHasInstalled;
- (void)publishEvent:(id)a0 data:(id)a1;
- (id)createHybridCardWithScheme:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 initialDataStr:(id)a2 delegate:(id)a3 useAnnieX:(BOOL)a4 uiConfig:(id)a5;
- (id)getContainerIdWithView:(id)a0;
- (id)getSchemaWithView:(id)a0;
- (id)getViewType:(id)a0;
- (void)loadLynxView:(id)a0;
- (void)publishCommonEvent:(id)a0 data:(id)a1;
- (void)p_setupSubscribeEvent;
- (BOOL)isAnnieXSchema:(id)a0;
- (BOOL)p_isUrlInABTestPathList:(id)a0;
- (id)bidForScheme:(id)a0;
- (id)createPuzzleLynxCardWithScheme:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 initialDataStr:(id)a2 delegate:(id)a3;
- (BOOL)p_isHybridView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidAppear:(id)a0;
- (void)viewDidDisappear:(id)a0;

@end
