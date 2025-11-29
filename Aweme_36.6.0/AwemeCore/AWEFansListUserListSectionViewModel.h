@class AWEFansListFansCountWrapperModel, NSArray, NSString, AWERelationListDataController, NSError;

@interface AWEFansListUserListSectionViewModel : AWEFansUserListBaseSectionViewModel

@property (retain, nonatomic) AWERelationListDataController *dataController;
@property (nonatomic) BOOL hideRefreshHeader;
@property (nonatomic) long long maximumLoadFansCount;
@property (nonatomic) long long currentLoadPageNumber;
@property (nonatomic) long long maximumLoadPageNumber;
@property (nonatomic) BOOL hasInitFetch;
@property (readonly, nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *categoryTypes;
@property (retain, nonatomic) NSString *vcd;
@property (copy, nonatomic) NSString *statusMsg;
@property (nonatomic) long long sortType;
@property (retain, nonatomic) NSError *requestError;
@property (nonatomic) BOOL hasError;
@property (nonatomic) BOOL blockTa;
@property (nonatomic) BOOL blockByTa;
@property (nonatomic) BOOL onlySelfView;
@property (nonatomic) long long mixCount;
@property (nonatomic) long long fansNumberRefresh;
@property (copy, nonatomic) NSString *requestLogID;
@property (retain, nonatomic) AWEFansListFansCountWrapperModel *fansCountWrapperModel;
@property (weak, nonatomic) id recommendVM;

+ (Class)aAWERelationDOUYINHTSAdapterClass;

- (void)setupViewModel;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (BOOL)hotsoonHasMoreData;
- (id)aAWERelationDOUYINHTSAdapter;
- (id)baseDataController;
- (double)sectionFooterViewHeight;
- (id)displayedUserIDs;
- (void)loadMoreHotsoonDatawWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isMine;

@end
