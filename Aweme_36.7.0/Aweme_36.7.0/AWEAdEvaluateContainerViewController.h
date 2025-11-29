@class UITableView, NSString, AWEAdEvaluateV2TableViewController, AWEAdEvaluateTableViewController;
@protocol AWECommentGesProtocol;

@interface AWEAdEvaluateContainerViewController : UIViewController <AWEAdEvaluateContainerViewController>

@property (retain, nonatomic) AWEAdEvaluateTableViewController *feedCommentViewController;
@property (retain, nonatomic) AWEAdEvaluateV2TableViewController *feedCommentV2ViewController;
@property (nonatomic) BOOL enableCommentNewVersion;
@property (nonatomic) double lastShowInterval;
@property (nonatomic) double showDuration;
@property (weak, nonatomic) id<AWECommentGesProtocol> gesDelegate;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL fromCommentVC;
@property (nonatomic) BOOL isBGColorWhite;
@property (nonatomic) BOOL shouldForceLightMode;
@property (nonatomic) BOOL isShowInContainerView;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *accountType;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commentTabChangedWithShow:(BOOL)a0;
- (double)calculateStayTime;
- (void)onAWEUIThemeChangeNotification;
- (void)resetStayTime;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;

@end
