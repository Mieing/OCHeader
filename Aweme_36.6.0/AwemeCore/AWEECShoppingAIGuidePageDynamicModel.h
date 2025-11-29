@class NSString, NSNumber, AWEECShoppingAIGuideHomePageDynamicModel;

@interface AWEECShoppingAIGuidePageDynamicModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) AWEECShoppingAIGuideHomePageDynamicModel *homePageDynamic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)homePageDynamicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
