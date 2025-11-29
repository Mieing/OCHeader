@class UITableViewCell, NSString, AWEAwemeModel, AWEListDataController, NSDictionary, UITableView, AWEAwemeDetailCellViewController, UIViewController, NSNumber;
@protocol AWEFallThroughFeedViewControllerProtocol, AWEAwemeDetailBottomBarCoordinatorProtocol;

@interface AWEAwemeNewDetailBaseController : AWEBaseController

@property (readonly, nonatomic) long long currentPlayIndex;
@property (readonly, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEListDataController *dataController;
@property (readonly, copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL isHotPointPanelShow;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) BOOL showInitialLoading;
@property (nonatomic) BOOL notDefaultInit;
@property (nonatomic) BOOL preventPersonalPage;
@property (readonly, nonatomic) UITableViewCell *currentDisplayingCell;
@property (readonly, nonatomic) AWEAwemeDetailCellViewController *currentCellConrtoller;
@property (nonatomic) BOOL isSlidingDirectionRight;
@property (nonatomic) BOOL isModernFullScreen;
@property (nonatomic) BOOL shouldPreventPause;
@property (nonatomic) BOOL shouldPreventTrackStayTime;
@property (nonatomic) BOOL shouldPreventStartStayTime;
@property (retain, nonatomic) AWEAwemeModel *slideToProfileModel;
@property (retain, nonatomic) NSNumber *transitionTableViewBounces;
@property (copy, nonatomic) NSString *backToSchema;
@property (weak, nonatomic) UIViewController<AWEFallThroughFeedViewControllerProtocol> *previousFeedFallThroughController;
@property (weak, nonatomic) UIViewController<AWEFallThroughFeedViewControllerProtocol> *nextFeedFallThroughController;
@property (readonly, nonatomic) id<AWEAwemeDetailBottomBarCoordinatorProtocol> bottomBarCoordinator;

- (id)previousPage;

@end
