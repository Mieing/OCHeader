@class NSString, IESHYHybridContainerConfig, PuzzleContext;

@interface AnnieLiveBizCardProvider : NSObject <AnnieLiveBizCardProviderProtocol, BDXServiceProtocol>

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) IESHYHybridContainerConfig *configuration;
@property (retain, nonatomic) PuzzleContext *puzzleContext;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createService;
+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (id)getAnnieXCardModelWithModel:(id)a0 bid:(id)a1;
+ (void)configBridgeWithModel:(id)a0;
+ (id)p_schemaWithModel:(id)a0;
+ (void)updateCardModel:(id)a0 preCreateModel:(id)a1;
+ (void)updatePuzzleGlobalPropsWithCardModel:(id)a0 CustomGlobalProps:(id)a1 initialData:(id)a2 schema:(id)a3 puzzleContext:(id)a4 routerParams:(id)a5 enablePreCreate:(BOOL)a6;
+ (id)generateJsSourceWithPramName:(id)a0 dict:(id)a1;
+ (id)generateJsSourceWithFuncName:(id)a0 str:(id)a1;
+ (id)p_schemaWithSchema:(id)a0 originURL:(id)a1 routerParams:(id)a2 kernalType:(unsigned long long)a3;
+ (unsigned long long)serviceType;

- (id)createViewWithConfiguration:(id)a0 puzzleContext:(id)a1 lifeCycleDelegate:(id)a2 bid:(id)a3;
- (BOOL)enableAnnieLiveCard;
- (id)createViewWithCardModel:(id)a0 configuration:(id)a1 puzzleContext:(id)a2 lifeCycleDelegate:(id)a3;
- (id)getAnnieXCardModelWithConfiguration:(id)a0 puzzleContext:(id)a1 bid:(id)a2 cardBuilder:(id /* block */)a3;
- (id)createViewWithCardModel:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 lifeCycleDelegate:(id)a2;
- (void)reuseForContainer:(id)a0;
- (void)reuseEndForContainer:(id)a0;
- (id)updateAnnieXCardModel:(id)a0 WithConfiguration:(id)a1 puzzleContext:(id)a2 bid:(id)a3 cardBuilder:(id /* block */)a4;
- (void)updateCardModel:(id)a0;
- (id)p_schemaWithConfiguration:(id)a0;
- (id)createViewWithConfiguration:(id)a0 puzzleContext:(id)a1 lifeCycleDelegate:(id)a2 bid:(id)a3 schema:(id)a4;
- (id)createAnnieXCard:(id)a0 lifeCycleDelegate:(id)a1;
- (void).cxx_destruct;

@end
