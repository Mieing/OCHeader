@class NSNumber, NSDictionary, NSString;

@interface TTAXBridgeAccountLogoutMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *code;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSString *msg;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
