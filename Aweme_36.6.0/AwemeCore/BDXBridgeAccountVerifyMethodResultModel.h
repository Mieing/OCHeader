@class NSString, NSDictionary;

@interface BDXBridgeAccountVerifyMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *verifyWay;
@property (copy, nonatomic) NSString *verifyTicket;
@property (copy, nonatomic) NSDictionary *verifyExtraParams;
@property (copy, nonatomic) NSDictionary *bizParams;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
