@class NSString, NSDictionary;

@interface AWEBaseDataModel : AWERootModel

@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSDictionary *logPassback;

+ (id)JSONKeyPathsByPropertyKey;

- (void)customMergeRequest:(id)a0 logPassback:(id)a1;
- (void)awe_mergeRequestId:(id)a0 logPassback:(id)a1;
- (id)sharedModelInfos;
- (void).cxx_destruct;

@end
