@class UIButton, IESLiveRevenueInteractLogHandler, NSString;
@protocol IESLiveRevenueInteractLinkerProvider, IESLiveInteractionSingleViewOptimizer;

@interface IESLiveRevenueInteractSingleViewHandler : NSObject <IESLiveInteractionSingleViewOptimizationCropRegionCalculator, IESLiveInteractionSingleViewOptimizationDelegate, IESLiveRevenueInteractSingleViewService, IESLiveRevenueInteractPlayStateAction>

@property (retain, nonatomic) UIButton *singleViewHint;
@property (retain, nonatomic) UIButton *singleViewSwitchBtn;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL openSingleView;
@property (retain, nonatomic) IESLiveRevenueInteractLogHandler *logHandler;
@property (nonatomic) BOOL enableSingleViewGlobal;
@property (retain, nonatomic) id<IESLiveRevenueInteractLinkerProvider> provider;
@property (retain, nonatomic) id<IESLiveInteractionSingleViewOptimizer> singleViewOptimizer;
@property (copy, nonatomic) id /* block */ layoutCalculator;
@property (copy, nonatomic) id /* block */ localLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)logInfoWithCategory:(unsigned long long)a0 event:(id)a1 extra:(id)a2;
- (void)didChangeStateFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)enableSingleView;
- (void)disableSingleView;
- (BOOL)isEnableSingleView;
- (void)switchMixTypeResult:(long long)a0 isMixOnClient:(BOOL)a1;
- (void)updateConfigIfNeeded:(unsigned long long)a0;
- (void)updateSingleViewCropRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateSingleViewAfterOpenWithLayoutModel:(id)a0;
- (void)setupEnvWithScene:(unsigned long long)a0;
- (void)p_showRenderArea;
- (BOOL)enableSingleViewOptimizationDebug;
- (void)p_removeSingleViewOptimizationDebugItems;
- (BOOL)singleViewOptimizationEnableShouldInterceptedWithLayoutModel:(id)a0;
- (void)tryStartSingleView;
- (void)p_switchMixType;
- (void)calculateSingleViewOptimizationCropRegionForUILayout:(long long)a0 completion:(id /* block */)a1;
- (void)singleViewOptimizationDidEnableWithConfig:(id)a0;
- (void)singleViewOptimizationDidDisableWithConfig:(id)a0;
- (void)singleViewOptimizationDidUpdateCropRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)mediaService;

@end
