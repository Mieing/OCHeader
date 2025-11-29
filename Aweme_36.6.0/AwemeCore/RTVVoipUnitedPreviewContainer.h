@class NSNumber, RTVVoipVideoPreviewContainer, NSString, RTVVoipPreviewContainer, RTVVoipSession, RTVVoipMonitor;
@protocol RTVVoipConfigureManagerInterface, RxInjector, RTVXRControllerInjector;

@interface RTVVoipUnitedPreviewContainer : UIView <RTVVoipSessionObserver, RTVRenderable, RTVXRPreviewInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) RTVVoipSession *session;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> configureManager;
@property (readonly, nonatomic) RTVVoipPreviewContainer *pairPreviewContainer;
@property (readonly, nonatomic) RTVVoipVideoPreviewContainer *groupPreviewContainer;
@property (nonatomic) long long selectedEffectPreviewLayoutType;
@property (nonatomic) long long previewContainerType;
@property (readonly, nonatomic) RTVVoipMonitor *voipMonitor;
@property (retain, nonatomic) NSNumber *pendingApplyPreviewLayoutType;
@property (nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)rtv_awakeFromControllerInjector;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (void)notifyChangeActive:(BOOL)a0;
- (void)rtvSession:(id)a0 participatorsDidChange:(id)a1 oldParticipators:(id)a2;
- (id)customPreview;
- (void)switchLayout:(BOOL)a0 animator:(id)a1 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (long long)currentPreviewLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewViewFrameForParticipator:(id)a0;
- (long long)__previewLayoutTypeWithSelectedProp:(id)a0;
- (id)__switchToPreviewLayout:(long long)a0 animated:(BOOL)a1;
- (long long)__defaultPreviewLayout;
- (long long)__previewTypeWithSession:(id)a0;
- (void)__configComponentsWithPreviewContainerType:(long long)a0;
- (void)releaseGroupComponents;
- (void)updatePreviewLayoutTypeWithSelectedProp:(id)a0;
- (void)switchPreviewLayoutIfNeededWithSelectedSticker:(id)a0;
- (id)switchToDefaultPreviewLayout:(BOOL)a0;
- (void).cxx_destruct;

@end
