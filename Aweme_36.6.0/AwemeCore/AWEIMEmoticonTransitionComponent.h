@class NSString, UIViewController;
@protocol AWEIMEmoticonPanelBoxComponent, AWEIMEmoticonPanelSyncComponent;

@interface AWEIMEmoticonTransitionComponent : AWEIMComponentBase <IESIMPadRotateMessage, AWEIMEmoticonTransitionComponent>

@property (nonatomic) BOOL ipadTransitioned;
@property (weak, nonatomic) UIViewController *topViewController;
@property (weak, nonatomic) id<AWEIMEmoticonPanelBoxComponent> boxComponent;
@property (weak, nonatomic) id<AWEIMEmoticonPanelSyncComponent> syncComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)iesim_viewController:(id)a0 willTransitionToSize:(struct CGSize { double x0; double x1; })a1 transitionCoordinator:(id)a2;
- (void)layoutSubviewsIfNeeded;
- (void).cxx_destruct;
- (void)dealloc;

@end
