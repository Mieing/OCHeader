@class NSArray, NSString;

@interface AWEAdDoubleColumnFeedbackModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *filterWordNewArray;
@property (copy, nonatomic) NSArray *filterWordCategoryDetailsArray;
@property (copy, nonatomic) NSArray *reportFilterWordArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filterWordNewArrayJSONTransformer;
+ (id)filterWordCategoryDetailsArrayJSONTransformer;
+ (id)reportFilterWordArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
