@class UIView, TabResponse, HTSEventContext, IESLiveSearchViewController, NSString, UIImageView, IESLiveViewingHistoryEntranceView, UIViewController, UILabel, IESLiveFeedDrawerViewControllerContext;
@protocol IESLiveBubbleGuide, IESLiveDrawerFeedControllerProtocol;

@interface IESLiveFeedSearchContainerViewController : UIViewController <IESLiveDrawerFeedContainerProtocol>

@property (retain, nonatomic) UIViewController<IESLiveDrawerFeedControllerProtocol> *contentVC;
@property (retain, nonatomic) UIView *searchView;
@property (retain, nonatomic) IESLiveViewingHistoryEntranceView *historyEntranceView;
@property (retain, nonatomic) UILabel *searchLabel;
@property (retain, nonatomic) UIImageView *searchIcon;
@property (retain, nonatomic) IESLiveSearchViewController *searchVC;
@property (retain, nonatomic) TabResponse *tabModel;
@property (nonatomic) BOOL didAppear;
@property (retain, nonatomic) UIViewController *historyViewController;
@property (retain, nonatomic) UIView<IESLiveBubbleGuide> *tabTipView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) BOOL disableRefresh;
@property (retain, nonatomic) IESLiveFeedDrawerViewControllerContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)refreshLayout:(BOOL)a0;
- (void)trackAppear;
- (void)setupContentViewController;
- (void)searchTap;
- (BOOL)canHideWithGesture;
- (void)updateTrackContext:(id)a0;
- (id)initWithContentViewController:(id)a0 tabModel:(id)a1;
- (void)refreshConstrains;
- (BOOL)isNewFeedDrawStyle;
- (void)setupSearchEntranceView;
- (void)setupHistoryEntranceView;
- (void)removeSearchVC;
- (void).cxx_destruct;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
