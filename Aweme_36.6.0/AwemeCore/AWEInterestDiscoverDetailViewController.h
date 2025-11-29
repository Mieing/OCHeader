@class UIViewController, NSString, AWEAwemeModel, DUXContentSheet, AWEInterestDiscoverContext, AWEListDataController;
@protocol AWEAwemeDetailTableViewControllerProtocol;

@interface AWEInterestDiscoverDetailViewController : UIViewController <AWEAwemeDetailTableViewControllerOuterVCDelegate, AWEInterestDiscoverPanelViewControllerDelegate, AWEAwemeDetailTableViewControllerDelegate, DUXSheetDelegate>

@property (retain, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *detailVC;
@property (retain, nonatomic) AWEAwemeModel *firstModel;
@property (weak, nonatomic) AWEListDataController *dataController;
@property (copy, nonatomic) NSString *interestId;
@property (copy, nonatomic) NSString *interestName;
@property (retain, nonatomic) AWEInterestDiscoverContext *context;
@property (retain, nonatomic) DUXContentSheet *panelSheet;
@property (nonatomic) BOOL hasFirstAppeared;
@property (nonatomic) BOOL needShowPanelVCWhenAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)detailTableViewController:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2 model:(id)a3;
- (void)sheetWillDismiss:(id)a0;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_didStartTransitionWithContext:(id)a0;
- (BOOL)transition_gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_performCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_didCancelPercentDrivenTransitionWithContext:(id)a0;
- (unsigned long long)currentVisibleCellIndex;
- (double)getStartSeekTime:(id)a0;
- (void)adaptPlaybackRateForDetailCell:(id)a0;
- (void)recordForSpeedInheritedIfNeedsWithSpeed:(id)a0 model:(id)a1;
- (id)initWithAwemeModel:(id)a0 referString:(id)a1 logExtraDict:(id)a2;
- (id)interestIDString;
- (id)interestNameString;
- (void)interestDiscoverPageBottomBarShowPanelClick;
- (void)showPanelVC;
- (id)currentPlayingAwemeModel;
- (void)interestDiscoverPanelListDidSelectAtIndex:(long long)a0 aweme:(id)a1;
- (void)shouldDismissPanelVC;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;

@end
