@class NSArray, NSString;

@interface AWEFeedLLMRecommendSurveyFrequencyStorageModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *showSurveyDateRecord;
@property (copy, nonatomic) NSArray *notFilledSurveyDateRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
