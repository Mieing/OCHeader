@class AWESearchNilTextModel, NSString, AWESearchNilInfoModel, AWESearchCorrectModel, AWESearchFeelGoodModel, AWESearchGoodsFeedbackModel, NSDictionary, AWEGeneralSearchBackgroundModel, NSArray, AWEGuideSearchWordsExtraModel, TTHttpResponse, NSNumber;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchResultCachalotDataResponse : AWEBaseApiModel <CSPChunkResponse>

@property (copy, nonatomic) NSDictionary *log;
@property (copy, nonatomic) NSDictionary *rawData;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cardCount;
@property (copy, nonatomic) NSDictionary *businessExtra;
@property (retain, nonatomic) AWEGeneralSearchBackgroundModel *verticalSearchBackgroundConfig;
@property (retain, nonatomic) AWESearchNilInfoModel *searchNilInfo;
@property (retain, nonatomic) AWESearchNilTextModel *searchNilTextModel;
@property (retain, nonatomic) AWESearchCorrectModel *correctModel;
@property (retain, nonatomic) AWESearchFeelGoodModel *feelGoodModel;
@property (copy, nonatomic) NSDictionary *nextPage;
@property (nonatomic) long long cursor;
@property (retain, nonatomic) AWESearchGoodsFeedbackModel *feedback;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSDictionary *streamTimeCost;
@property (nonatomic) BOOL isFilterSearch;
@property (copy, nonatomic) NSDictionary *networkMonitorExtra;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> rootModel;
@property (copy, nonatomic) NSArray *filterSections;
@property (nonatomic) unsigned long long resultStatus;
@property (copy, nonatomic) NSDictionary *streamTag;
@property (copy, nonatomic) NSArray *guideSearchWordList;
@property (retain, nonatomic) AWEGuideSearchWordsExtraModel *guideSearchWordsExtra;
@property (nonatomic) BOOL hiddenFilter;
@property (copy, nonatomic) NSString *hideWords;
@property (retain, nonatomic) NSNumber *ackNumber;
@property (retain, nonatomic) TTHttpResponse *csp_ttResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filterSectionsJSONTransformer;
+ (id)guideSearchWordListJSONTransformer;
+ (id)searchNilTextModelTransformer;
+ (id)correctModelJSONTransformer;
+ (id)searchNilInfoJSONTransformer;
+ (id)feelGoodModelJSONTransformer;
+ (id)verticalSearchBackgroundConfigJSONTransformer;
+ (id)feedbackJSONTransformer;
+ (id)guideSearchWordsExtraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
