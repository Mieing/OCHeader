@class IESLiveSeatWidgeResourceManager, NSString, NSDictionary, UIView;

@interface IESLiveSeatWidgetComponent : IESLiveInteractComponentBase <IESLiveInteractionSeatWidgetInterface>

@property (retain, nonatomic) IESLiveSeatWidgeResourceManager *resourceManager;
@property (copy, nonatomic) NSDictionary *lastExtra;
@property (retain, nonatomic) UIView *battlerRoleChangeIconView;
@property (nonatomic) BOOL isValidDynamicLynxVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (void)componentBindContext;
- (BOOL)enableSeatWidgetComponent;
- (BOOL)mvpSeatWidgetComponentEnable;
- (void)doIconMoveAnimationWithExtra:(id)a0 completion:(id /* block */)a1;
- (void)getEffectWithName:(id)a0 complete:(id /* block */)a1;
- (id)getCurrentUIAdaptor;
- (void)p_doIconChangeAnimationWithWidgetUrl:(id)a0 toUid:(id)a1 fromUid:(id)a2 completion:(id /* block */)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateIconFrameToPlayground:(id)a0;
- (void).cxx_destruct;

@end
