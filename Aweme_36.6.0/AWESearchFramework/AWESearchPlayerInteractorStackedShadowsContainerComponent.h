@class AWESearchEventDispather, NSString, NSDictionary, UIView;
@protocol AWESearchContainerProtocol, AWESearchComponentProtocol;

@interface AWESearchPlayerInteractorStackedShadowsContainerComponent : AWESearchComponent <AWESearchPlayerInteractorStackedShadowsContainerComponentProvider>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *firstView;
@property (retain, nonatomic) UIView *secondView;
@property (retain, nonatomic) NSString *side;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewLayoutSubviews;
- (id)provideProtocol;
- (void)p_loadComponent;
- (void).cxx_destruct;
- (void)setCornerRadius:(id)a0;
- (id)componentView;

@end
