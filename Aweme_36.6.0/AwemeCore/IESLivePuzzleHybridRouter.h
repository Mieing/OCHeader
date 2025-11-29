@class IESHYRouterIMP, PuzzleSchemaParamsHandler;

@interface IESLivePuzzleHybridRouter : NSObject

@property (retain, nonatomic) IESHYRouterIMP *hybridRouter;
@property (retain, nonatomic) PuzzleSchemaParamsHandler *schemaHandler;

+ (void)dismissNewHybridPopupWithKernalType:(unsigned long long)a0 rootVC:(id)a1 isBottom:(BOOL)a2 removeOne:(BOOL)a3;
+ (void)initialize;

- (id)hybridContainerWithSchema:(id)a0 preferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(id)a2 lifeCycleDelegate:(id)a3;
- (id)hybridContainerWithURL:(id)a0 preferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 kernalType:(unsigned long long)a2 context:(id)a3 lifeCycleDelegate:(id)a4;
- (id)openHybridWithParam:(id)a0 context:(id)a1 eventParams:(id)a2;
- (id)setupContext:(id)a0 params:(id)a1;
- (BOOL)isWhiteList:(id)a0;
- (id)handleAnnieSchema:(id)a0 params:(id)a1;
- (id)openHybridWithParam:(id)a0 context:(id)a1 eventParams:(id)a2 router:(id)a3;
- (id)topHost:(id)a0;
- (void).cxx_destruct;
- (id)allowList;

@end
