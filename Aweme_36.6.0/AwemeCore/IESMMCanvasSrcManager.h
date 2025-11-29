@class NSString, NSMutableDictionary;

@interface IESMMCanvasSrcManager : IESMMObject <IESMMCanvasSourceProtocol, IESMMCanvasInteractProtocol>

@property (retain, nonatomic) NSMutableDictionary *srcdict;
@property (copy, nonatomic) id /* block */ sourceBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerCanvasSourceBlock:(id /* block */)a0;
- (void)transformSource:(long long)a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)transformSource:(long long)a0 toRotation:(double)a1;
- (void)transformSource:(long long)a0 toScale:(double)a1;
- (void)insertSourceToIndex:(long long)a0;
- (void)removeSourceWithIndex:(long long)a0;
- (id)getSourceWithIndex:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
