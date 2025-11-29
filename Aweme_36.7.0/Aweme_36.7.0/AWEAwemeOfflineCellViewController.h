@class UITableViewCell, NSString, DUXBaseLabel, AWEAwemeModel, DUXBaseImageView, UIView, NSDictionary, AWEAwemeDetailBottomBarCoordinator;
@protocol AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEPlayInteractionViewControllerProtocol, AWEAwemePlayInteractionCommerceDelegate, AWEFeedTableViewCellControllerPlayerDelegate, AWEFeedTableViewCellProtocol;

@interface AWEAwemeOfflineCellViewController : AWEAwemeBaseViewController <AWEFeedTableViewCellViewControllerProtocol>

@property (nonatomic) BOOL canShowBottomBarInListCell;
@property (retain, nonatomic) AWEAwemeDetailBottomBarCoordinator *bottomBarCoordinator;
@property (retain, nonatomic) UIView *offlineTipsBgView;
@property (retain, nonatomic) DUXBaseImageView *leftIconView;
@property (retain, nonatomic) DUXBaseLabel *descLabel;
@property (retain, nonatomic) DUXBaseImageView *rightIconView;
@property (weak, nonatomic) id<AWEFeedTableViewCellControllerPlayerDelegate> playerDelegate;
@property (nonatomic) long long indexPath;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long type;
@property (readonly, nonatomic) id<AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWEPlayInteractionViewControllerProtocol> interactionController;
@property (weak, nonatomic) UITableViewCell<AWEFeedTableViewCellProtocol> *superCell;
@property (copy, nonatomic) NSDictionary *extTrackLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (void)cellWillDisplay:(id)a0 forRowAtIndexPath:(id)a1 tableView:(id)a2;
- (void)setBottomBarHidden:(BOOL)a0;
- (void)setAllUIElementsHidden:(BOOL)a0 withAnimation:(BOOL)a1;
- (void)setHideMusicInfoViewFlag:(BOOL)a0;
- (id)currentBottomBarCoordinator;
- (BOOL)getCanShowBottomBarInListCell;
- (void)p_removeNetworkTips:(id)a0;
- (BOOL)isInOfflineUserInsert;
- (void)p_didTapOfflineTipsView;
- (BOOL)p_shouldShowTips;
- (id)createBottomBarOfflineContext;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)play;
- (void)viewSafeAreaInsetsDidChange;
- (id)initWithMediaType:(long long)a0;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)reset;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)configureWithModel:(id)a0;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)layoutSubViews;

@end
