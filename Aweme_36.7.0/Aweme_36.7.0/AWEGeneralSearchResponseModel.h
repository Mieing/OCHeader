@class AWESearchAdModel, AWERiskPreventModel, AWESearchImmersiveModel, AWEGeneralSearchExtraModel, NSDictionary, AWEGuideSearchWordsExtraModel, AWEGeneralSearchBackgroundModel, NSMutableArray, NSString, AWESearchCommonEasterEggModel, AWESearchHotSpotConfigModel, AWESearchCorrectModel, AWESearchNilInfoModel, AWESearchNilTextModel, NSArray, NSNumber, AWEGeneralSearchActivityTagModel;

@interface AWEGeneralSearchResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWERiskPreventModel *riskPreventModel;
@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSString *correctName;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *backtrace;
@property (nonatomic) long long pollingTime;
@property (copy, nonatomic) NSString *hideWords;
@property (retain, nonatomic) NSMutableArray *cardArray;
@property (retain, nonatomic) AWESearchAdModel *adModel;
@property (retain, nonatomic) AWESearchCorrectModel *correctModel;
@property (retain, nonatomic) AWESearchNilInfoModel *searchNilInfoModel;
@property (retain, nonatomic) AWESearchNilTextModel *searchNilTextModel;
@property (copy, nonatomic) NSArray *guideSearchWordList;
@property (retain, nonatomic) AWEGuideSearchWordsExtraModel *guideSearchWordsExtra;
@property (retain, nonatomic) NSMutableArray *searchPopInfo;
@property (retain, nonatomic) AWEGeneralSearchExtraModel *extraModel;
@property (nonatomic) unsigned long long resultStatus;
@property (retain, nonatomic) NSNumber *ackNumber;
@property (copy, nonatomic) NSDictionary *timeCost;
@property (copy, nonatomic) NSDictionary *streamTag;
@property (retain, nonatomic) NSMutableArray *patchData;
@property (copy, nonatomic) NSArray *patchOperationsModelArray;
@property (nonatomic) BOOL isBrief;
@property (nonatomic) unsigned long long chunkVer;
@property (retain, nonatomic) AWESearchImmersiveModel *searchImmersiveConfig;
@property (retain, nonatomic) AWEGeneralSearchBackgroundModel *searchBackgroundConfig;
@property (retain, nonatomic) AWEGeneralSearchBackgroundModel *waterfallSearchBackgroundConfig;
@property (retain, nonatomic) AWESearchCommonEasterEggModel *commonEasterEggModel;
@property (retain, nonatomic) AWEGeneralSearchActivityTagModel *activityTag;
@property (copy, nonatomic) NSDictionary *currentRequestLogPassback;
@property (retain, nonatomic) AWESearchHotSpotConfigModel *hotSpotConfig;
@property (retain, nonatomic) AWESearchHotSpotConfigModel *bottomBarConfig;
@property (copy, nonatomic) NSString *subChannel;
@property (retain, nonatomic) NSDictionary *searchSatiParamsForPitayaCommerce;

+ (id)extraModelJSONTransformer;
+ (id)guideSearchWordListJSONTransformer;
+ (id)riskPreventModelJSONTransformer;
+ (id)searchNilInfoModelTransformer;
+ (id)searchNilTextModelTransformer;
+ (id)adModelJSONTransformer;
+ (id)searchBackgroundConfigJSONTransformer;
+ (id)bottomBarConfigJSONTransformer;
+ (id)searchPopInfoJSONTransformer;
+ (id)cardArrayJSONTransformer;
+ (id)searchImmersiveConfigJSONTransformer;
+ (id)waterfallSearchBackgroundConfigJSONTransformer;
+ (id)patchDataJSONTransformer;
+ (id)commonEasterEggModelJSONTransformer;
+ (id)hotSpotConfigJSONTransformer;
+ (id)patchOperationsModelArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)bottomBarType;
- (void).cxx_destruct;

@end
