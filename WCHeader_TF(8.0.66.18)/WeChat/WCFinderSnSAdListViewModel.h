@class NSString, WCFinderShareListReportModel, NSMutableSet, NSData, NSMutableArray, WCFinderContact;
@protocol WCFinderSnSAdListViewModelDelegate;

@interface WCFinderSnSAdListViewModel : NSObject <WCFinderDataItemExt, WCFinderContactExt>

@property (retain, nonatomic) NSMutableArray *dataItems;
@property (retain, nonatomic) NSMutableSet *tidContainSet;
@property (retain, nonatomic) NSString *lastTid;
@property (retain, nonatomic) NSString *lastNonceID;
@property (retain, nonatomic) NSString *encryptedlastTid;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned long long refreshTime;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) NSData *lastBuff;
@property (retain, nonatomic) WCFinderContact *contact;
@property (nonatomic) unsigned long long maxID;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) BOOL isLoading;
@property (weak, nonatomic) id<WCFinderSnSAdListViewModelDelegate> delegate;
@property (retain, nonatomic) WCFinderShareListReportModel *reportModel;
@property (readonly, nonatomic) NSString *enterSourceFeedId;
@property (copy, nonatomic) NSString *adParamInfoStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTid:(id)a0 nonceID:(id)a1 userName:(id)a2 dataScene:(id)a3 commentScene:(int)a4 encryptedlastTid:(id)a5;
- (void)addContentVM:(id)a0;
- (id)transformDataItems:(id)a0;
- (BOOL)deleteDataItemWithIndex:(unsigned long long)a0 tid:(id)a1;
- (void)refreshLatestData;
- (void)reportRelatedInfo:(id)a0;
- (void)requestNextpageList;
- (unsigned long long)currentFollowState;
- (void)onFeedFollowStatusChangedAction;
- (BOOL)isEnableFetchNextpage;
- (void)appendFinderContentVM:(id)a0;
- (long long)contentIndexOfTid:(id)a0;
- (id)contentVMWithTid:(id)a0;
- (id)contentVMAtIndex:(long long)a0;
- (void)contentUnlikeFeedback:(id)a0 subType:(long long)a1;
- (BOOL)isSourceValid;
- (void)onFinderDataItemDelete:(id)a0;
- (id)contentMediaIndexPathWithTid:(id)a0;
- (void)realRemoveContentVMFromDataSource:(id)a0;
- (void)onFinderDataItemMediaURLIsExpired:(id)a0;
- (int)feedViewControllerScene;
- (void)onFinderContactFollowStatusUpdate:(id)a0;
- (void)onFinderContactFollowStatusUpdateFailure:(id)a0;
- (void).cxx_destruct;

@end
