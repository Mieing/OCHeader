@class NSString, NSDictionary, AWEECShoppingAIGuideHomePageLeadingModel;

@interface AWEECShoppingAIGuideHomePageDynamicModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) AWEECShoppingAIGuideHomePageLeadingModel *leadingWord;
@property (copy, nonatomic) NSString *pageDynamicRawConfig;
@property (copy, nonatomic) NSDictionary *cardData;
@property (nonatomic) long long cardType;
@property (nonatomic) double actualLynxHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)leadingWordDynamicModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
