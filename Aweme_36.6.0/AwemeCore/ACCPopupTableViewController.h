@class NSString, UITableView, UIView;
@protocol ACCPopupTableViewDataManagerProtocol, ACCPopupTableViewControllerDelegateProtocol;

@interface ACCPopupTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, ACCPopupTableViewCellDelegateProtocol, UIGestureRecognizerDelegate, ACCPopupTableViewControllerProtocol, ACCFullScreenPanelViewProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *headView;
@property (retain, nonatomic) UIView *headBar;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) id<ACCPopupTableViewDataManagerProtocol> dataManager;
@property (retain, nonatomic) UIView *accessibilityViewToback;
@property (nonatomic) struct CGPoint { double x; double y; } startCenter;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) BOOL supportSkin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCPopupTableViewControllerDelegateProtocol> delegate;

- (double)panelViewHeight;
- (double)panelContentViewHeight;
- (void)p_updateConstraint;
- (void)p_makeConstraint;
- (void)p_setupGestureRecognizer;
- (void)tapToDismiss:(id)a0;
- (void)registerTableViewCellReuse;
- (void)drawCorner;
- (void)addTapGestureToView:(id)a0 withSelector:(SEL)a1;
- (void)handlePanToDismiss:(id)a0;
- (void)addPanGestureToView:(id)a0 withSelector:(SEL)a1;
- (void)p_setupUI;
- (double)contentHeight;
- (void).cxx_destruct;
- (id)initWithDataManager:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void *)identifier;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)accessibilityPerformEscape;
- (id)panelName;

@end
