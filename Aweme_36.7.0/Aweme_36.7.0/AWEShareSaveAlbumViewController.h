@class NSString, NSDictionary, AWEShareSaveAlbumDataCenter, UITableView;

@interface AWEShareSaveAlbumViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEShareSaveAlbumDataCenterDelegate, AWEShareActionCellDelegate, AWEIMHalfScreenContainerScrollProtocol, AWEIMHalfScreenContainerVCDelegate, AWEShareSaveTableViewCellDelegate>

@property (copy, nonatomic) NSDictionary *context;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEShareSaveAlbumDataCenter *dataCenter;
@property (copy, nonatomic) id /* block */ shareCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)shareSaveAlbumViewControllerWithContext:(id)a0 shareCompletion:(id /* block */)a1 vcCreateCompletion:(id /* block */)a2;

- (void)dismissPanelIfNeeded;
- (void)halfScreenContainerVCWillDismiss:(id)a0;
- (void)p_addSubviews;
- (void)removeCellForRowAtIndexPath:(id)a0;
- (void)p_applicationWillEnterForeground;
- (void)p_trackPanelShow;
- (void)p_dismissWithCompletion:(id /* block */)a0;
- (void)clickedButtonForCellModel:(id)a0;
- (void)didTapCancelButtonForCellModel:(id)a0;
- (void)mediaDownloadCompleted:(long long)a0;
- (void)mediaSaveAlbumCompleted:(BOOL)a0;
- (void)didRemoveCellModelAtIndex:(unsigned long long)a0;
- (void)didInsertCellModelAtIndex:(unsigned long long)a0;
- (void)showToastIfNetworkChange:(double)a0;
- (id)p_getDownloadAwemeModel;
- (id)initWithContext:(id)a0 dataCenter:(id)a1 shareCompletion:(id /* block */)a2;
- (double)p_preferredVCHeight;
- (void)p_invokeShareCompletion:(unsigned long long)a0;
- (void)p_setUpConstraints;
- (void)p_adjustTableContentInset;
- (void)p_dismissWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)p_sendMessageWithModel:(id)a0;
- (void)p_sharePrivacyToShareList:(id)a0 completion:(id /* block */)a1;
- (void)p_tappedMoreFriends;
- (void)p_clickedButtonForDefaultThirdPlatformCellModel:(id)a0;
- (void)p_trackShareVideoWithPlatform:(id)a0 enterMethod:(id)a1;
- (void)p_shareWithTableView:(id)a0 indexPath:(id)a1;
- (void)shareSaveIMTableViewCellDidClickSendButton:(id)a0;
- (void)didClickNoFolderNoticeViewWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)scrollView;
- (void)viewDidLoad;
- (void)dealloc;
- (void)p_applicationDidEnterBackground:(id)a0;
- (void)p_registerNotifications;

@end
