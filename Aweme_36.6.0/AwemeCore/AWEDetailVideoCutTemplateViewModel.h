@class NSMutableDictionary, AWEDetailNaviBarModel, AWEAweMVTemplateModel, NSDictionary, AWEDetailUserProfileModel, AWEDetailHeaderInfoModel, AWEDetailShimmerModel, NSString, AWEDetailAwemeListDataController, AWEDetailDiffableMultiModelObject, AWEMergedMVDetailListResponseModel, NSArray, NSIndexPath;

@interface AWEDetailVideoCutTemplateViewModel : NSObject <AWEDetailViewModelProtocol>

@property (retain, nonatomic) AWEDetailNaviBarModel *naviBarObject;
@property (retain, nonatomic) AWEDetailShimmerModel *shimmerViewObject;
@property (retain, nonatomic) AWEDetailHeaderInfoModel *headerInfoObject;
@property (retain, nonatomic) AWEDetailUserProfileModel *verifiedUserObject;
@property (retain, nonatomic) AWEDetailDiffableMultiModelObject *awemeListObject;
@property (retain, nonatomic) AWEDetailAwemeListDataController *awemeListDataController;
@property (copy, nonatomic) NSArray *cachedObjectArray;
@property (retain, nonatomic) AWEMergedMVDetailListResponseModel *detailResponse;
@property (copy, nonatomic) NSString *templateID;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *topicID;
@property (copy, nonatomic) NSString *authorId;
@property (retain, nonatomic) AWEAweMVTemplateModel *templateModel;
@property (nonatomic) long long detailInfoFetchState;
@property (nonatomic) long long awemeListFetchState;
@property (nonatomic) long long awemeListInitFetchStatus;
@property (retain, nonatomic) NSDictionary *activityMobJSON;
@property (nonatomic) BOOL isFromSearch;
@property (retain, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSString *downloadURL;
@property (retain, nonatomic) NSDictionary *searchParams;
@property (retain, nonatomic) NSString *searchKeyword;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *jianyingAwemeID;
@property (retain, nonatomic) NSString *serverJumpVideocutParams;
@property (retain, nonatomic) NSDictionary *jumpVideocutParams;
@property (copy, nonatomic) NSString *serverJumpVideocutSchema;
@property (retain, nonatomic) NSDictionary *logExtra;
@property (readonly, nonatomic) NSString *midPageFromEntrance;
@property (copy, nonatomic) NSString *anchorName;
@property (retain, nonatomic) NSMutableDictionary *paramDict;
@property (readonly, copy, nonatomic) NSArray *sectionControllerModelObjectArray;
@property (retain, nonatomic) NSIndexPath *awemeListSectionSelectedIndexPath;
@property (nonatomic) BOOL awemeListUpdated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isVideocutInstalled;
- (void)configViewModelWithParamDict:(id)a0;
- (void)fetchDetailInfo;
- (void)fetchAwemeList;
- (BOOL)isFetchingInitialAwemeList;
- (id)p_userProfileModelForUserModel:(id)a0;
- (id)p_templateCreatorEntranceLinkWithModelIfNeed;
- (void)p_decomposeDetailResponse:(id)a0;
- (void)p_setupAwemeListDataController;
- (id)p_generateCommonRequestParams;
- (void).cxx_destruct;

@end
