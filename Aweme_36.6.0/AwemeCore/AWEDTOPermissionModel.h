@class NSArray, NSString, AWEDTOTempStoryPermissionModel;

@interface AWEDTOPermissionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *excludeUserList;
@property (copy, nonatomic) NSString *excludeUserListJson;
@property (copy, nonatomic) NSArray *partSeeUserList;
@property (copy, nonatomic) NSString *partSeeUserListJson;
@property (nonatomic) long long itemComment;
@property (nonatomic) long long itemDownload;
@property (nonatomic) long long itemDuet;
@property (nonatomic) long long itemReact;
@property (nonatomic) long long privateType;
@property (nonatomic) BOOL dontShare;
@property (nonatomic) long long videoHideSearch;
@property (nonatomic) BOOL enablePublishExclusion;
@property (copy, nonatomic) NSArray *exclusionUidList;
@property (copy, nonatomic) NSString *downloadType;
@property (copy, nonatomic) NSString *itemShare;
@property (nonatomic) BOOL shouldHideInMyWorks;
@property (nonatomic) long long partSee;
@property (nonatomic) long long commentPermissionStatus;
@property (nonatomic) long long xgPrivateType;
@property (nonatomic) long long itemDanmaku;
@property (nonatomic) long long privacyPermissionType;
@property (nonatomic) BOOL privacyParamsOpt;
@property (copy, nonatomic) NSArray *dontShareUidList;
@property (retain, nonatomic) AWEDTOTempStoryPermissionModel *tempStoryPermission;
@property (nonatomic) long long draftTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tempStoryPermissionJSONTransformer;
+ (id)excludeUserListJSONTransformer;
+ (id)partSeeUserListJSONTransformer;
+ (id)acc_JSONKeyPathsByPropertyKey;
+ (void)_aweLazyRegisterLoad_Draft;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
