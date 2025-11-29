@class NLETextLayer_OC;

@interface ACCNLETextLayerHandler : ACCNLELayerHandler

@property (retain, nonatomic) NLETextLayer_OC *textLayer;

+ (BOOL)canProcessLayer:(id)a0;
+ (id /* block */)viewConstrutor;
+ (id /* block */)viewConfigConstrutor;

- (void)configView:(id)a0 config:(id)a1 forLayer:(id)a2;
- (void).cxx_destruct;

@end
