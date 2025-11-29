@class AWESearchAdModel, AWERiskPreventModel, AWELVideoAlbumHistoryInfoModel, NSDictionary, AWERelatedFeedExtra, AWESearchGlobalDoodleConfigModel, AWEGuideWordModel, NSString, AWEAwemeResponseExtraModel, AWEClientCacheStrategy, AWESearchCorrectModel, NSArray, AWESearchNilInfoModel, AWESearchNilTextModel, NSNumber, AWELVideoRelatedXiguaGuideModel;

@interface AWEAwemeResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWESearchAdModel *adModel;
@property (nonatomic) unsigned long long feed_dataType;
@property (nonatomic) double serverResponseTime;
@property (nonatomic) double dataToModelCostTime;
@property (nonatomic) unsigned long long responseDataLength;
@property (retain, nonatomic) AWEGuideWordModel *guideWord;
@property (nonatomic) unsigned long long feed_dataType_teen;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (nonatomic) long long relatedItemDiversionType;
@property (nonatomic) long long relatedItemDiversionStyle;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) AWERiskPreventModel *riskPreventModel;
@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSString *cacheItemIds;
@property (copy, nonatomic) NSString *correctName;
@property (copy, nonatomic) NSString *backtrace;
@property (copy, nonatomic) NSArray *awesomeSplashList;
@property (retain, nonatomic) AWESearchCorrectModel *correctModel;
@property (retain, nonatomic) AWESearchNilInfoModel *searchNilInfoModel;
@property (retain, nonatomic) AWESearchNilTextModel *searchNilTextModel;
@property (readonly, copy, nonatomic) NSArray *guideSearchWordList;
@property (copy, nonatomic) NSString *hideWords;
@property (nonatomic) BOOL isAdReloadingEnabled;
@property (nonatomic) BOOL enableSplashShow;
@property (copy, nonatomic) NSArray *liveList;
@property (retain, nonatomic) AWESearchGlobalDoodleConfigModel *extraModel;
@property (nonatomic) BOOL clientAdsStrategyeEnable;
@property (retain, nonatomic) NSNumber *recommendFollowUnreadCount;
@property (copy, nonatomic) NSString *satiParamsForPitayaCommerce;
@property (retain, nonatomic) AWEAwemeResponseExtraModel *extra;
@property (copy, nonatomic) NSString *extraInfo;
@property (copy, nonatomic) NSDictionary *streamTimeCost;
@property (retain, nonatomic) AWELVideoAlbumHistoryInfoModel *history;
@property (retain, nonatomic) AWELVideoRelatedXiguaGuideModel *relatedXiguaGuideModel;
@property (retain, nonatomic) AWERelatedFeedExtra *relatedFeedExtra;
@property (retain, nonatomic) NSArray *filterInfos;
@property (retain, nonatomic) NSString *firstItemIDs;
@property (retain, nonatomic) NSArray *chimeVideoList;
@property (retain, nonatomic) AWEClientCacheStrategy *clientCacheStrategy;
@property (copy, nonatomic) NSDictionary *effectiveTime;
@property (nonatomic) long long offset;
@property (copy, nonatomic) NSString *pageID;

+ (id)extraJSONTransformer;
+ (id)historyJSONTransformer;
+ (id)awemeListJSONTransformer;
+ (id)extraModelJSONTransformer;
+ (id)guideSearchWordListJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)riskPreventModelJSONTransformer;
+ (id)awesomeSplashListJSONTransformer;
+ (id)correctModelTransformer;
+ (id)searchNilInfoModelTransformer;
+ (id)searchNilTextModelTransformer;
+ (id)clientAdsStrategyeEnableJSONTransformer;
+ (id)isAdReloadingEnabledJSONTransformer;
+ (id)liveListJSONTransformer;
+ (id)relatedXiguaGuideModelJSONTransformer;
+ (id)relatedFeedExtraJSONTransformer;
+ (id)relatedFeedHotSpotJSONTransformer;
+ (id)chimeVideoListJSONTransformer;
+ (id)clientCacheStrategyJSONTransformer;
+ (id)aweCommerce_subModelPropertyKey;
+ (id)adModelJSONTransformer;
+ (id)guideWordModel_subModelPropertyKey;
+ (id)guideWordJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)feedResponse;
- (void)setFeedResponse:(id)a0;
- (void).cxx_destruct;

@end
