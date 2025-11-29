@class ACCAIGCTaskRetryDetailModel, NSString, NSDictionary, ACCAIGCTaskCodeInfoModel, AWEAIGCBaseBusinessCustomModel, NSArray;

@interface AWEAIGCProcessResultModel : AWEBaseApiModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *taskGroupId;
@property (copy, nonatomic) NSString *respJson;
@property (copy, nonatomic) NSDictionary *resourceMap;
@property (copy, nonatomic) NSDictionary *timeStatistics;
@property (retain, nonatomic) ACCAIGCTaskRetryDetailModel *retryDetail;
@property (retain, nonatomic) ACCAIGCTaskCodeInfoModel *codeInfo;
@property (copy, nonatomic) NSString *aigcPerformanceInfo;
@property (nonatomic) long long consumeAssetAmount;
@property (retain, nonatomic) AWEAIGCBaseBusinessCustomModel *businessParseModel;
@property (copy, nonatomic) NSArray *taskList;
@property (copy, nonatomic) NSArray *generationList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)retryDetailJSONTransformer;
+ (id)codeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
