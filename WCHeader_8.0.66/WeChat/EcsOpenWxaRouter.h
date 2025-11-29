@class NSDictionary;
@protocol EcsCoreEcsFireFrequencyControl_Ur;

@interface EcsOpenWxaRouter : EcsOpenBaseRouter

@property (retain, nonatomic) id<EcsCoreEcsFireFrequencyControl_Ur> preloadFC;
@property (readonly, nonatomic) NSDictionary *nextActionHandlers;

- (id)createNextActionHandlers;
- (void)handleNextAction:(id)a0 jumpInfo:(id)a1 context:(id)a2;
- (id)init;
- (BOOL)canHandle:(id)a0 context:(id)a1;
- (void)handlePreload:(id)a0 context:(id)a1 preloadConfig:(id)a2 callback:(id)a3;
- (void)handleOpen:(id)a0 context:(id)a1 callback:(id)a2;
- (void)updateWAAppOpenParameter:(id)a0 byContext:(id)a1;
- (void)updateWAAppOpenParameter:(id)a0 byCgiPreloadInfo:(id)a1;
- (id)createWAAppOpenParameter:(id)a0;
- (BOOL)hasSupportFeatureWithJumpInfo:(id)a0;
- (void).cxx_destruct;

@end
