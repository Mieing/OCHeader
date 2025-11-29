@class AWEAwemeModel, NSString, NSArray, AWEDuetDetailModel, AWEDetailShimmerModel, AWEDetailDiffableMultiModelObject, AWEDetailNaviBarModel, AWEDetailNewHeaderInfoModel, AWEDetailAwemeListDataController, NSMutableDictionary, AWEDuetDetailResponse, NSIndexPath;

@interface AWEDetailDuetViewModel : NSObject <AWEDetailViewModelProtocol>

@property (retain, nonatomic) AWEDetailNaviBarModel *naviBarObject;
@property (retain, nonatomic) AWEDetailShimmerModel *shimmerViewObject;
@property (retain, nonatomic) AWEDetailNewHeaderInfoModel *headerInfoObject;
@property (retain, nonatomic) AWEDetailDiffableMultiModelObject *awemeListObject;
@property (retain, nonatomic) AWEDetailAwemeListDataController *awemeListDataController;
@property (copy, nonatomic) NSArray *cachedObjectArray;
@property (retain, nonatomic) NSString *fromAwemeID;
@property (copy, nonatomic) NSString *originalAwemeID;
@property (nonatomic) long long duetEntranceType;
@property (retain, nonatomic) AWEAwemeModel *originalAwemeModel;
@property (retain, nonatomic) AWEDuetDetailResponse *detailResponse;
@property (nonatomic) long long detailInfoFetchState;
@property (nonatomic) long long awemeListFetchState;
@property (nonatomic) long long awemeListInitFetchStatus;
@property (readonly, nonatomic) AWEDuetDetailModel *duetModel;
@property (retain, nonatomic) NSMutableDictionary *paramDict;
@property (readonly, copy, nonatomic) NSArray *sectionControllerModelObjectArray;
@property (retain, nonatomic) NSIndexPath *awemeListSectionSelectedIndexPath;
@property (nonatomic) BOOL awemeListUpdated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configViewModelWithParamDict:(id)a0;
- (void)fetchDetailInfo;
- (void)fetchAwemeList;
- (BOOL)isFetchingInitialAwemeList;
- (BOOL)canOpenDuetCamera;
- (void)p_decomposeDuetDetailResponse:(id)a0;
- (id)p_userProfileModelForUserModel:(id)a0;
- (void).cxx_destruct;

@end
