@class AWEDynamicTabResponseModel, NSString, NSArray, AWEGeneralBusinessConfigModel, NSDictionary, AWESearchIntentionQueryModel, AWEGeneralSearchExtraModel, NSMutableArray, AWEGuideSearchWordsExtraModel;

@interface AWESearchGeneralCachalotDataResponse : AWESearchResultCachalotDataResponse <AWEUGCTopicResponseParamsProtocol>

@property (retain, nonatomic) AWEGeneralBusinessConfigModel *businessConfigModel;
@property (retain, nonatomic) AWEGeneralSearchExtraModel *extraModel;
@property (copy, nonatomic) NSArray *leafModels;
@property (retain, nonatomic) NSMutableArray *cardArray;
@property (nonatomic) unsigned long long chunkVer;
@property (retain, nonatomic) NSMutableArray *patchData;
@property (copy, nonatomic) NSArray *patchOperationsModelArray;
@property (copy, nonatomic) NSDictionary *currentRequestLogPassback;
@property (copy, nonatomic) NSArray *siriSuggestionScenes;
@property (copy, nonatomic) NSArray *globalGuideSearchWordList;
@property (retain, nonatomic) AWEGuideSearchWordsExtraModel *globalGuideSearchWordsExtra;
@property (retain, nonatomic) AWEDynamicTabResponseModel *dynamicTabResponseModel;
@property (retain, nonatomic) AWESearchIntentionQueryModel *intentionQuery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraModelJSONTransformer;
+ (id)patchDataJSONTransformer;
+ (id)patchOperationsModelArrayJSONTransformer;
+ (id)businessConfigModelJSONTransformer;
+ (id)globalGuideSearchWordListJSONTransformer;
+ (id)intentionQueryJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)bottomBarConfig;
- (void).cxx_destruct;

@end
