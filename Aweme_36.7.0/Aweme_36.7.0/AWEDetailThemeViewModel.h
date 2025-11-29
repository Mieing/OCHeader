@class AWEAwemeModel, NSString, NSArray, AWEDetailHeaderInfoModel, AWEDetailShimmerModel, AWEDetailDiffableMultiModelObject, AWEDetailNaviBarModel, AWEDetailAwemeListDataController, AWEThemeDetailResponse, NSMutableDictionary, NSIndexPath;

@interface AWEDetailThemeViewModel : NSObject <AWEDetailViewModelProtocol>

@property (retain, nonatomic) AWEDetailNaviBarModel *naviBarObject;
@property (retain, nonatomic) AWEDetailHeaderInfoModel *headerInfoObject;
@property (retain, nonatomic) AWEDetailShimmerModel *shimmerViewObject;
@property (retain, nonatomic) AWEDetailDiffableMultiModelObject *awemeListObject;
@property (retain, nonatomic) AWEDetailAwemeListDataController *awemeListDataController;
@property (copy, nonatomic) NSArray *cachedObjectArray;
@property (retain, nonatomic) NSString *topicID;
@property (retain, nonatomic) NSString *topicName;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEThemeDetailResponse *detailResponse;
@property (nonatomic) long long detailInfoFetchState;
@property (nonatomic) long long awemeListFetchState;
@property (nonatomic) long long awemeListInitFetchStatus;
@property (nonatomic) BOOL isHalf;
@property (readonly, copy, nonatomic) NSString *shootSameSchema;
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
- (id)p_userProfileModelForUserModel:(id)a0;
- (void)p_decomposeDetailResponse:(id)a0;
- (id)userCountStringWithCount:(long long)a0;
- (void).cxx_destruct;

@end
