@class AWEBigToSmallModalDelegate, NSString, NSHashTable, UIView, UIViewController;
@protocol ACCEditTransitionContainerViewControllerProtocol;

@interface ACCEditTransitionService : NSObject <ACCEditTransitionServiceProtocol>

@property (retain, nonatomic) AWEBigToSmallModalDelegate *bigToSmallModalTransitionDelegate;
@property (weak, nonatomic) UIViewController<ACCEditTransitionContainerViewControllerProtocol> *containerViewController;
@property (retain, nonatomic) NSHashTable *observers;
@property (copy, nonatomic) NSString *previousPage;
@property (retain, nonatomic) UIView *beforeTransitionSnapshotView;
@property (retain, nonatomic) UIView *avoidShowBgColorViewWhenDisapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentViewController:(id)a0 completion:(id /* block */)a1;
- (void)presentViewController:(id)a0 customTransitionDelegate:(id)a1 completion:(id /* block */)a2;
- (void)presentViewController:(id)a0 processSnapBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)presentViewController:(id)a0 customTransitionDelegate:(id)a1 modalPresentationStyle:(long long)a2 completion:(id /* block */)a3;
- (void)notifyObserverWillDidmissController:(id)a0;
- (void)notifyObserverDidDismissController:(id)a0;
- (void)p_snapBeforeTransition;
- (void)p_addAvoidShowBgColorViewWhenDisapper;
- (void)notifyObserverWillPresentController:(id)a0;
- (void)notifyObserverDidPresentController:(id)a0;
- (void).cxx_destruct;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (id)initWithContainerViewController:(id)a0;
- (void)dismissViewController:(id)a0 completion:(id /* block */)a1;

@end
