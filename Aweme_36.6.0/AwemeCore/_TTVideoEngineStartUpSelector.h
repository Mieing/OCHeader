@protocol IVCABRModule;

@interface _TTVideoEngineStartUpSelector : NSObject

@property (retain, nonatomic) id<IVCABRModule> abrModule;
@property (nonatomic) int scene;

+ (long long)convertToABRNetworkState:(long long)a0;

- (id)initWithScene:(int)a0 PredictType:(long long)a1;
- (id)selectWithPlaySource:(id)a0 params:(id)a1 onceAlgoType:(int)a2 isAddBufferInfo:(BOOL)a3;
- (void).cxx_destruct;

@end
