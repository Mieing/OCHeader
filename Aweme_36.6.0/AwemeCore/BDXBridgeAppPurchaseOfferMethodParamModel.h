@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeAppPurchaseOfferMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *item_id;
@property (retain, nonatomic) NSNumber *item_type;
@property (retain, nonatomic) NSNumber *quantity;
@property (retain, nonatomic) NSNumber *checkLogin;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSDictionary *offer;
@property (copy, nonatomic) NSDictionary *log_extra;
@property (copy, nonatomic) NSDictionary *offer_v2;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
