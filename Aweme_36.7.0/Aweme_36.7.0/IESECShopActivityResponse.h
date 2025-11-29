@class NSString, NSDictionary, NSArray, IESECShopActivityDynamicModel, IESECShopActivityDynamicBlock;

@interface IESECShopActivityResponse : IESECBaseApiModel

@property (retain, nonatomic) IESECShopActivityDynamicModel *activityDynamicModel;
@property (copy, nonatomic) NSString *extraSchema;
@property (copy, nonatomic) NSDictionary *floatSchemes;
@property (copy, nonatomic) NSArray *marqueeModels;
@property (copy, nonatomic) NSArray *multiMarqueeModels;
@property (retain, nonatomic) IESECShopActivityDynamicBlock *activityDynamicBlock;

+ (id)marqueeModelsJSONTransformer;
+ (id)multiMarqueeModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
