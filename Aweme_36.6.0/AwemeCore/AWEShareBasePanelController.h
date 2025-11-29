@class UIVisualEffect, NSString, UIVisualEffectView, NSMutableSet, UIView, NSMutableOrderedSet;

@interface AWEShareBasePanelController : UIViewController <AWEUIToastCustomizing, AWEShareView>

@property (retain, nonatomic) UIVisualEffectView *contentVisualEffectView;
@property (retain, nonatomic) NSMutableSet *receivedLifeCycleMessages;
@property (readonly, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSMutableOrderedSet *extensionSet;
@property (readonly, nonatomic) UIVisualEffect *contentVisualEffect;
@property (readonly, nonatomic) double viewTopCornerRadius;
@property (readonly, nonatomic) BOOL dismissesAutomatically;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (nonatomic) BOOL shouldAllowPresentationHook;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)awe_shouldBypassPresentationHook;
- (id)aweui_toastTargetViewController;
- (void)addDismissedHandler:(id /* block */)a0;
- (void)addWillDismissHandler:(id /* block */)a0;
- (void)removeExtension:(id)a0;
- (BOOL)markLifeCycleMessageReceived:(SEL)a0;
- (void)notifyExtensionsWithSelector:(SEL)a0;
- (void)p_notifyModalPanelWillDisappear;
- (void)addRoundedCornerIfNeeded;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 dismissPanel:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)addExtension:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)addNotificationObservers;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
