@class IESLiveCountTimer, IESLiveAnchorInteractToolPreviewPerfView, NSString;

@interface IESLiveAnchorInteractToolCommonServiceImpl : IESLiveGeneralBaseService <IESLiveAnchorInteractToolCommonService, IESLiveAnchorEffectBaseEvent>

@property (retain, nonatomic) IESLiveAnchorInteractToolPreviewPerfView *perfView;
@property (nonatomic) struct CGPoint { double x; double y; } initialCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dragRect;
@property (retain, nonatomic) IESLiveCountTimer *perfUpdateTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)invalidateAllTimer;
- (void)onEffectRenderWithEffect:(id)a0 item:(id)a1 extra:(id)a2;
- (void)onEffectRemoveWithEffect:(id)a0 item:(id)a1 extra:(id)a2;
- (void)showPerfViewWithLinkSchema:(id)a0;
- (void)hidePerfView;
- (void)onPerfViewTapped;
- (void)handlePerfViewPan:(id)a0;
- (void)updatePerfData;
- (id)setupPerfModelWithPerfDict:(id)a0 Title:(id)a1 key:(id)a2 factor:(double)a3 suffix:(id)a4;
- (struct CGPoint { double x0; double x1; })calNewPerfViewCenterWithTranslation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isPreviewDebugEffectWithItem:(id)a0;
- (void).cxx_destruct;

@end
