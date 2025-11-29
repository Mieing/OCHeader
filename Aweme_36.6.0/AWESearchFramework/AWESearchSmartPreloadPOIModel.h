@class NSString, NSDictionary, NSArray;

@interface AWESearchSmartPreloadPOIModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *targetPage;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *bizCode;
@property (copy, nonatomic) NSString *fromScene;
@property (copy, nonatomic) NSString *fromSubScene;
@property (copy, nonatomic) NSDictionary *btmStandardData;
@property (copy, nonatomic) NSDictionary *extraMobParams;
@property (retain, nonatomic) NSArray *goodsList;
@property (retain, nonatomic) NSArray *billsList;

+ (id)goodsListJSONTransformer;
+ (id)billsListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
