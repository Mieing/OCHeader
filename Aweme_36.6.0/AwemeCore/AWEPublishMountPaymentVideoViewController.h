@class UIView, NSString, NSArray, AWEWebcastCodeGenGetUserItemsResponseDataModel, UIImageView, AWEPublishMountPaymentVideoListView, UITableView, DUXAlertDialog;

@interface AWEPublishMountPaymentVideoViewController : UIViewController <DUXSheetDelegate>

@property (retain, nonatomic) UIImageView *titleTipImageView;
@property (retain, nonatomic) UIImageView *noPermissionCenterImageView;
@property (retain, nonatomic) UIImageView *noHistoryVideoCenterImageView;
@property (retain, nonatomic) UIView *tipView;
@property (retain, nonatomic) AWEPublishMountPaymentVideoListView *listView;
@property (retain, nonatomic) DUXAlertDialog *dialog;
@property (retain, nonatomic) AWEWebcastCodeGenGetUserItemsResponseDataModel *userItemsModel;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) id /* block */ updateItemBlock;
@property (copy, nonatomic) NSArray *mountVideoLists;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dux_titleForColoseButton;
- (void)configurePanel;
- (void)configTitleTipImageView:(id)a0;
- (void)showNoPermissionIcon;
- (void)showNoVideoListsIcon;
- (void)configureTableView;
- (void)handleClicktitleTip;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
