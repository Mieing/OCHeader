@class NSMapTable, NSString, NSHashTable, IESLiveInteractionSingleViewOptimizationConfig;
@protocol IESLiveInteractPushStreaming;

@interface IESLiveInteractionSingleViewOptimizerImpl : NSObject <IESLiveInteractionSingleViewOptimizer>

@property (readonly, weak, nonatomic) id<IESLiveInteractPushStreaming> interactionStreamer;
@property (retain, nonatomic) IESLiveInteractionSingleViewOptimizationConfig *config;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRegion;
@property (retain, nonatomic) NSMapTable *cropRegionCalculators;
@property (retain, nonatomic) NSHashTable *delegates;
@property (readonly, nonatomic) BOOL isDuringInteraction;
@property (readonly, nonatomic) long long currentMixType;
@property (readonly, nonatomic) BOOL optimizationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)a0;
- (void)updateSingleViewOptimizationCropRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isSingleViewOptimizationAllowedInScene:(unsigned long long)a0;
- (BOOL)isSingleViewOptimizationAllowedInScene:(unsigned long long)a0 UILayout:(long long)a1;
- (BOOL)isSingleViewOptimizationAllowedInScene:(unsigned long long)a0 UILayout:(long long)a1 slotsCount:(long long)a2 mixType:(long long)a3;
- (BOOL)canEnableSingleViewOptimization;
- (void)enableSingleViewOptimizationWithResultHandler:(id /* block */)a0;
- (void)enableSingleViewOptimizationWithForce:(BOOL)a0 withResultHandler:(id /* block */)a1;
- (void)disableSingleViewOptimizationWithResultHandler:(id /* block */)a0;
- (void)refreshSingleViewOptimizationCropRegion;
- (void)useConfig:(id)a0;
- (void)registerSingleViewOptimizationCropRegionCalculator:(id)a0 forScene:(unsigned long long)a1;
- (void)unregisterSingleViewOptimizationCropRegionCalculatorForScene:(unsigned long long)a0;
- (void)notifyStreamMixTypeSwitchEvent:(long long)a0;
- (void)notifyStartInteractionWithMixType:(long long)a0;
- (BOOL)enableSingleViewOptimizationPreviewDebug;
- (void)monitorEnableSingleViewOptWithFailureReason:(id)a0 description:(id)a1;
- (BOOL)enableSingleViewWithMixType:(long long)a0;
- (void)monitorEnableSingleViewOptWithFailureReason:(id)a0 resultHandler:(id /* block */)a1;
- (BOOL)p_singleViewOptimizationEnableShouldInterceptedWithConfig:(id)a0;
- (id)streamMixTypeStringFromEnum:(long long)a0;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;

@end
