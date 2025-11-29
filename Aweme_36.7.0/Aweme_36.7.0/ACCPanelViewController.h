@class UIView, NSString, NSHashTable;

@interface ACCPanelViewController : NSObject <ACCPanelViewController>

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSHashTable *animators;
@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) UIView *panelView;
@property (nonatomic) BOOL isShowingPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animatePanelView:(id)a0 withAnimator:(id)a1;
- (void)removeAllObserver;
- (void)showPanelView:(id)a0 duration:(double)a1 completion:(id /* block */)a2;
- (void)dismissPanelView:(id)a0 duration:(double)a1;
- (void)showPanelView:(id)a0 duration:(double)a1;
- (void)dismissPanelView:(id)a0;
- (void)animatePanelView:(id)a0 withAnimator:(id)a1 completion:(id /* block */)a2;
- (void)notifyObeserverWillShowPanelView:(id)a0;
- (void)notifyObeserverWillDismissPanelView:(id)a0;
- (void)notifyObeserverDidShowPanelView:(id)a0;
- (void)notifyObeserverDidDismissPanelView:(id)a0;
- (void)showPanelView:(id)a0;
- (void).cxx_destruct;
- (void)registerObserver:(id)a0;
- (id)initWithContainerView:(id)a0;
- (void)unregisterObserver:(id)a0;

@end
