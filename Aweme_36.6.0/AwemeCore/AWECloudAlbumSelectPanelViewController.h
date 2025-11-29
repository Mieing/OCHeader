@class NSIndexPath, NSString, UIView, ACCButton, UITableView;
@protocol AWECloudAlbumDataItemProtocol, AWECloudAlbumTableViewControllerDelegateProtocol, AWECloudAlbumDataManagerProtocol;

@interface AWECloudAlbumSelectPanelViewController : UIViewController <UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource, AWECloudAlbumTableViewCellDelegateProtocol, AWECloudAlbumCreateViewControllerDelegate>

@property (retain, nonatomic) id<AWECloudAlbumDataManagerProtocol> dataManager;
@property (retain, nonatomic) UIView *headView;
@property (retain, nonatomic) UIView *headBar;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) ACCButton *uploadBtn;
@property (retain, nonatomic) UIView *accessibilityViewToback;
@property (nonatomic) struct CGPoint { double x; double y; } startCenter;
@property (nonatomic) BOOL isDragScrollView;
@property (nonatomic) BOOL hasCreateTask;
@property (nonatomic) BOOL hasUplaodTask;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) id<AWECloudAlbumDataItemProtocol> selectedAlbum;
@property (weak, nonatomic) id<AWECloudAlbumTableViewControllerDelegateProtocol> vcDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_updateConstraint;
- (void)p_makeConstraint;
- (void)p_setupGestureRecognizer;
- (void)tapToDismiss:(id)a0;
- (void)registerTableViewCellReuse;
- (void)drawCorner;
- (void)addTapGestureToView:(id)a0 withSelector:(SEL)a1;
- (void)fetchRemoteAlbumList;
- (id)createNewAlbumVC;
- (void)p_updateUploadBtnIfNeed;
- (void)uploadBtnClicked;
- (void)createAlbumWith:(id)a0 complete:(id /* block */)a1;
- (void)handlePanToDismiss:(id)a0;
- (void)addPanGestureToView:(id)a0 withSelector:(SEL)a1;
- (void)dismissVCWithCompletion:(id /* block */)a0;
- (void)onCellClickedWithDelegate:(id)a0;
- (void)p_setupUI;
- (double)contentHeight;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithDataManager:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)accessibilityPerformEscape;

@end
