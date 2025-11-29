@class NSArray, NSDictionary, NSString;

@interface AWECodeGenDouyinContentPayChargeRecommendConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *recommendTrialTimeList;
@property (nonatomic) double recommendTrialTimeStart;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recommendTrialTimeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
