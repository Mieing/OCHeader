@class AWEDTOSearchParams, NSString, AWEDTOLiteVideoDiaryModel, NSDictionary, AWEDTOMagicReportData, AWEDTOTemplateParams, AWEDTOCreativeRecommendMobModel;

@interface AWEDTOReportModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *selectedMethod;
@property (copy, nonatomic) NSString *shootEnterFrom;
@property (copy, nonatomic) NSString *searchClueId;
@property (retain, nonatomic) AWEDTOMagicReportData *magic3;
@property (copy, nonatomic) NSString *activityMobJson;
@property (copy, nonatomic) NSString *trackParams;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *contentSource;
@property (copy, nonatomic) NSString *lastItemId;
@property (copy, nonatomic) NSString *originalFromMusicId;
@property (copy, nonatomic) NSString *originalFromMvId;
@property (copy, nonatomic) NSString *activityExtraJson;
@property (copy, nonatomic) NSString *isBeautify;
@property (retain, nonatomic) AWEDTOSearchParams *searchParams;
@property (copy, nonatomic) NSString *dynamicActivityId;
@property (nonatomic) BOOL isHandsFree;
@property (copy, nonatomic) NSString *activityFeedJson;
@property (retain, nonatomic) AWEDTOLiteVideoDiaryModel *liteVideoDiaryModel;
@property (copy, nonatomic) NSString *publishTitleTpl;
@property (copy, nonatomic) NSDictionary *publishTrackJson;
@property (copy, nonatomic) NSString *fromGroupId;
@property (retain, nonatomic) AWEDTOTemplateParams *templateParams;
@property (copy, nonatomic) NSString *shareToStoryType;
@property (copy, nonatomic) NSString *shareFromKey;
@property (copy, nonatomic) NSString *shareFromType;
@property (copy, nonatomic) NSString *publishReason;
@property (copy, nonatomic) NSString *shootEnterMethod;
@property (nonatomic) long long shootRatio;
@property (copy, nonatomic) NSString *todayInPast;
@property (copy, nonatomic) NSString *lastGroupMusicId;
@property (copy, nonatomic) NSString *lastGroupPropIds;
@property (nonatomic) long long lastGroupAwemeType;
@property (retain, nonatomic) AWEDTOCreativeRecommendMobModel *creativeRecommendmobModel;
@property (nonatomic) BOOL isHoldCapcutCover;
@property (nonatomic) BOOL isAlbumSearch;
@property (copy, nonatomic) NSDictionary *ecLogParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)magic3JSONTransformer;
+ (id)searchParamsJSONTransformer;
+ (id)liteVideoDiaryModelJSONTransformer;
+ (id)templateParamsJSONTransformer;
+ (id)creativeRecommendmobModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
