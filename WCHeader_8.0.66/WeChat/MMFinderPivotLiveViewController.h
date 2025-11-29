@class MMLivePivotItemViewController, NSString, MMLiveCompleteViewController, MMFinderLiveTask, MMLiveFullScreenTipsView;
@protocol MMFinderPivotLiveViewControllerDelegate;

@interface MMFinderPivotLiveViewController : MMFinderLiveViewController <MMLiveMorphDismissSource>

@property (nonatomic) BOOL postponeJoinLive;
@property (nonatomic) BOOL supressMinimizeWindowAutoupdate;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) MMLiveCompleteViewController *completeViewController;
@property (retain, nonatomic) MMLiveFullScreenTipsView *privateJoinBlockView;
@property (weak) MMLivePivotItemViewController *itemController;
@property (weak, nonatomic) id<MMFinderPivotLiveViewControllerDelegate> pivotLiveVcDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveTaskId:(id)a0;
- (id)createOperationViewWithTaskId:(id)a0;
- (void)gotoCompletePageOverride;
- (id)createCompleteViewController;
- (void)showCompleteViewControllerWithoutAnimation;
- (BOOL)shouldSupportInteractiveTransition;
- (void)openShopShelfWithGoods:(id)a0 extraInfo:(id)a1 shopSelfParams:(id)a2;
- (void)onMMFinderLiveShopShelfCloseWithReason:(long long)a0;
- (void)persistMorphDismissTarget;
- (void)setupMorphDismiss:(BOOL)a0;
- (id)liveMorphDismissSourceTransitionSnapshotView;
- (void).cxx_destruct;

@end
