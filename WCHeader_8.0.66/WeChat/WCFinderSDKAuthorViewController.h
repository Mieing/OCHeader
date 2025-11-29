@class UILabel, NSString, UIView, WCFinderContact, UIImageView, UIButton, MMTableView, WCFinderSDKFinderBindTopView;
@protocol WCFinderSDKAuthorViewControllerDelegate;

@interface WCFinderSDKAuthorViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderCreateUserViewControllerDelegate, IAppDataExt>

@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appIconURL;
@property (copy, nonatomic) NSString *appID;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *titleIcon;
@property (retain, nonatomic) UIButton *comfirmBtn;
@property (retain, nonatomic) UIButton *denyBtn;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) WCFinderSDKFinderBindTopView *tableHeaderView;
@property (retain, nonatomic) UIView *tableFooterView;
@property (retain, nonatomic) WCFinderContact *contact;
@property (weak, nonatomic) id<WCFinderSDKAuthorViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppID:(id)a0 appName:(id)a1 iconURL:(id)a2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initSubViews;
- (void)reloadData;
- (void)initTableHeaderView;
- (void)layoutTableHeaderView;
- (void)initTableFooterView;
- (void)layoutTableFooterView;
- (id)navigationBarBackgroundColor;
- (void)onReturn;
- (void)onComfirmBtnClick;
- (void)onDenyBtnClick;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)createUserFinished:(id)a0;
- (void)OnGotListAppSettingItem:(id)a0 errType:(int)a1;
- (void)OnAppInfoChanged:(id)a0;
- (void).cxx_destruct;

@end
