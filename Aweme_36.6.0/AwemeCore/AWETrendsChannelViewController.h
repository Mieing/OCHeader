@class AWETrendsDataController, UIViewController, NSString;
@protocol AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol;

@interface AWETrendsChannelViewController : UIViewController <AWEFeedTabItemViewControllerProtocol>

@property (retain, nonatomic) UIViewController<AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol> *feedTableViewController;
@property (retain, nonatomic) AWETrendsDataController *dataController;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pauseWithAnimation;
- (void)animatedRefreshWithCompletion:(id /* block */)a0;
- (BOOL)currentTabIsTop;
- (void)onAwemeDeleted:(id)a0 isDislike:(BOOL)a1 silentlyDelete:(BOOL)a2;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)setChannelConfig:(id)a0;
- (BOOL)canRefresh;
- (void).cxx_destruct;
- (void)setScrollEnabled:(BOOL)a0;
- (void)play;
- (void)pause;
- (void)reload;
- (void)stop;
- (void)viewDidLoad;
- (void)setupUI;

@end
