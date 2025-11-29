@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeAppPurchaseOfferMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *msg;
@property (retain, nonatomic) NSNumber *code;
@property (copy, nonatomic) NSDictionary *offer;
@property (nonatomic) long long status;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
