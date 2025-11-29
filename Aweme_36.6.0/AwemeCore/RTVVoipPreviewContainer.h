@class CAGradientLayer, NSString, RTVVoipSession, RTVVoipPreviewView;
@protocol RTVVoipContextManagerInterface, RxInjector, RTVXRControllerInjector;

@interface RTVVoipPreviewContainer : UIView <RTVVoipSessionObserver, RTVXRPreviewInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) RTVVoipPreviewView *pairPreviewView;
@property (readonly, nonatomic) CAGradientLayer *backgroundLayer;
@property (weak, nonatomic) RTVVoipSession *voipSession;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> contextManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)rtv_awakeFromControllerInjector;
- (void)rtv_prepareRemoveFromControllerInjector;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__createComponents;
- (void)notifyChangeActive:(BOOL)a0;
- (void)voipSession:(id)a0 typeDidChangeTo:(long long)a1 fromType:(long long)a2;
- (void)switchLayout:(BOOL)a0 animator:(id)a1 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })__rectTransformFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)switchToPreviewLayoutType:(long long)a0 animated:(BOOL)a1;
- (long long)currentPreviewLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewViewFrameForParticipator:(id)a0;
- (id)averageColorRGBForSelf:(BOOL)a0;
- (void)__createGrandientLayer;
- (void)__createPreviews;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })__contentTransformFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;

@end
