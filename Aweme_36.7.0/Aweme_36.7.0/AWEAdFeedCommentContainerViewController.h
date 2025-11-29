@class NSString, AWEAdFeedCommentViewController, UITableView;
@protocol AWEAdFeedCommentContext, AWECommentGesProtocol, AWECommentListServiceContainerProtocol;

@interface AWEAdFeedCommentContainerViewController : AWEAdCommentBaseViewController <AWEAdFeedCommentContainerViewController> {
    AWEAdFeedCommentViewController *_commentViewController;
}

@property (retain, nonatomic) id<AWEAdFeedCommentContext> context;
@property (nonatomic) double lastShowInterval;
@property (nonatomic) double showDuration;
@property (weak, nonatomic) id<AWECommentGesProtocol> gesDelegate;
@property (weak, nonatomic) id<AWECommentListServiceContainerProtocol> commentServiceContainerDelegate;
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

- (void)commentPanelDidDismiss;
- (id)commentViewController;
- (void)setCommentViewController:(id)a0;
- (void)commentTabChangedWithShow:(BOOL)a0;
- (double)calculateStayTime;
- (void)onUIThemeChange;
- (void)onAWEUIThemeChangeNotification;
- (void)resetStayTime;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;

@end
