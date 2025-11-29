@class NSNumber, NSString, NSDictionary;

@interface BDXBridgeAccountSetVerifyStatusMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSString *verifyWay;
@property (copy, nonatomic) NSString *verifyTicket;
@property (copy, nonatomic) NSDictionary *verifyExtraParams;
@property (copy, nonatomic) NSDictionary *extraBizParams;
@property (copy, nonatomic) NSNumber *afid;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
