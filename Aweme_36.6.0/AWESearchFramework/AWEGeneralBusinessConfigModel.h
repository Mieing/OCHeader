@class AWESearchAdModel, AWESearchHotSpotDiscussInsertComponentModel, AWERiskPreventModel, AWEGeneralSearchBackgroundModel, NSDictionary, AWESearchImmersiveModel, AWESearchGuideModel, NSMutableArray, AWEGeneralSearchAIBallModel, AWESearchCommonRerankPitayaFeatureModel, NSString, AWEAICardInfo, AWESearchCommonEasterEggModel, AWESearchHotSpotConfigModel, NSNumber, AWESearchAISummaryEntryConfigModel, AWEGeneralSearchActivityTagModel;

@interface AWEGeneralBusinessConfigModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cardCount;
@property (copy, nonatomic) NSDictionary *extraFreshStruct;
@property (nonatomic) long long isDoubleColumnLeft;
@property (nonatomic) long long multiMod;
@property (copy, nonatomic) NSDictionary *nextPage;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) AWERiskPreventModel *riskPreventModel;
@property (copy, nonatomic) NSString *correctName;
@property (retain, nonatomic) AWESearchAdModel *adModel;
@property (copy, nonatomic) NSString *backtrace;
@property (nonatomic) long long pollingTime;
@property (nonatomic) unsigned long long resultStatus;
@property (retain, nonatomic) NSNumber *ackNumber;
@property (copy, nonatomic) NSDictionary *streamTag;
@property (retain, nonatomic) NSMutableArray *patchData;
@property (nonatomic) BOOL isBrief;
@property (nonatomic) BOOL isTrendingPage;
@property (nonatomic) BOOL isChallengePage;
@property (copy, nonatomic) NSString *hotSpotAdditionalInfo;
@property (retain, nonatomic) AWEGeneralSearchBackgroundModel *searchBackgroundConfig;
@property (retain, nonatomic) AWESearchHotSpotConfigModel *bottomBarConfig;
@property (retain, nonatomic) AWEGeneralSearchBackgroundModel *waterfallSearchBackgroundConfig;
@property (retain, nonatomic) AWESearchImmersiveModel *searchImmersiveConfig;
@property (retain, nonatomic) AWESearchCommonEasterEggModel *commonEasterEggModel;
@property (retain, nonatomic) AWEGeneralSearchActivityTagModel *activityTag;
@property (copy, nonatomic) NSDictionary *aiConversationInfo;
@property (nonatomic) BOOL hasHotSpotDiscussPage;
@property (retain, nonatomic) NSNumber *discussSortType;
@property (retain, nonatomic) AWESearchHotSpotDiscussInsertComponentModel *rencentPublishCard;
@property (retain, nonatomic) AWESearchHotSpotDiscussInsertComponentModel *fakeInsertCardTemplate;
@property (retain, nonatomic) AWESearchCommonRerankPitayaFeatureModel *commonRerankFeatureModel;
@property (copy, nonatomic) NSDictionary *currentRequestLogPassback;
@property (retain, nonatomic) NSDictionary *searchSatiParamsForPitayaCommerce;
@property (retain, nonatomic) AWESearchGuideModel *searchGuideModel;
@property (retain, nonatomic) AWEAICardInfo *aiCardInfo;
@property (copy, nonatomic) NSDictionary *impressionServerLog;
@property (retain, nonatomic) AWESearchAISummaryEntryConfigModel *aiSummaryEntryConfig;
@property (retain, nonatomic) AWEGeneralSearchAIBallModel *aiBallModel;
@property (copy, nonatomic) NSString *rewriteKeyword;

+ (id)commonRerankFeatureModelJSONTransformer;
+ (id)rencentPublishCardJSONTransformer;
+ (id)fakeInsertCardTemplateJSONTransformer;
+ (id)aiSummaryEntryConfigJSONTransformer;
+ (id)aiCardInfoJSONTransformer;
+ (id)aiBallModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
