@class IESLiveVisibleScopeSelectTable, NSArray, NSString, HTSEventContext, UINavigationController, CreateInfoResponse_CreateInfo;

@interface IESLiveVisibleScopeSelectViewController : UIViewController

@property (retain, nonatomic) NSArray *tableViewData;
@property (retain, nonatomic) NSArray *whiteListUserList;
@property (retain, nonatomic) NSArray *blackListUserList;
@property (nonatomic) unsigned long long initType;
@property (nonatomic) unsigned long long fromType;
@property (nonatomic) unsigned long long currentType;
@property (readonly, nonatomic) NSString *userID;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) unsigned long long liveType;
@property (retain, nonatomic) IESLiveVisibleScopeSelectTable *tableView;
@property (nonatomic) BOOL isPlayBack;
@property (readonly, nonatomic) UINavigationController *navi;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) CreateInfoResponse_CreateInfo *openLiveModel;

- (void)trackPanelShow;
- (void)didSelectIndex:(unsigned long long)a0;
- (id)initWithType:(unsigned long long)a0 fromType:(unsigned long long)a1 liveType:(unsigned long long)a2 trackerContext:(id)a3 DIContext:(id)a4;
- (void)showPopupSheet;
- (void)fetchSelectedHistoryData;
- (id)buildContainerView;
- (id)buildTitleLabel:(id)a0;
- (long long)tableViewDataIndexOfType:(unsigned long long)a0;
- (id)selectedUserListOfType:(unsigned long long)a0;
- (void)setUserListOfType:(unsigned long long)a0 userList:(id)a1;
- (void)pr_didSelectConfirmed:(unsigned long long)a0 type:(unsigned long long)a1 selectedUsers:(id)a2;
- (void)trackPlayBackFetchVisibleList;
- (void)trackItemSelectType:(unsigned long long)a0;
- (void)updateSelectedVisibleType:(unsigned long long)a0;
- (id)toastWhenDidSelect:(unsigned long long)a0;
- (void)p_getHistoryIsAllowList:(BOOL)a0 completion:(id /* block */)a1;
- (id)requestParams:(BOOL)a0;
- (void)callCompletionIfNeeded;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (double)totalHeight;

@end
