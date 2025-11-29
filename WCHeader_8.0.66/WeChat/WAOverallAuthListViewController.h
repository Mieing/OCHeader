@class NSString, NSArray, NSMutableDictionary, UIView, NSMutableArray, UILabel;

@interface WAOverallAuthListViewController : ZZFLEXTableViewController <WAContactMgrExtension, WAOverallAuthListCgiDelegate, MMNavBarInteractiveDelegate, WAAppDetailInfoManagerExtension> {
    NSMutableArray *_cellDataList;
    unsigned int _minUpdateTime;
    BOOL _hasNoMore;
    UIView *_emptyView;
    UILabel *_emptyLabel;
    NSArray *_allNeedShowScopeList;
    NSMutableDictionary *_cellDataWaitingForUpdate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)loadView;
- (void)viewDidLoad;
- (void)updateListData;
- (void)initEmptyView;
- (void)initRefreshControl;
- (void)requestNextPagePrivacyReportItem;
- (void)getOverallAuthListCgi:(id)a0 didGetAuthItemList:(id)a1 hasNoMore:(BOOL)a2 allNeedShowScopeList:(id)a3;
- (void)getOverallAuthListCgi:(id)a0 didFailWithError:(id)a1;
- (void)requestContactWithUsrNameList:(id)a0;
- (void)onModifyWeAppContact:(id)a0;
- (void)onAppAuthInfoListModifyEnd:(BOOL)a0 AuthDataList:(id)a1;
- (void)onDeleteAppUseUserInfo:(id)a0 errorCode:(int)a1 errMsg:(id)a2;
- (void)modifyCellWithUsrName:(id)a0 scope:(id)a1 desc:(id)a2 isAdd:(BOOL)a3;
- (id)normalTintColor;
- (BOOL)isSetNormalToBlackStyle;
- (void).cxx_destruct;

@end
