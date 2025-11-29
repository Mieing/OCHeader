@class NSArray, TTHttpResponse, NSString;

@interface AFDLearningFeedResponseModel : AWEBaseApiModel <CSPCommonResponse>

@property (retain, nonatomic) NSArray *dataList;
@property (retain, nonatomic) TTHttpResponse *csp_ttResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setResponseTimestampToNow;
- (void).cxx_destruct;

@end
