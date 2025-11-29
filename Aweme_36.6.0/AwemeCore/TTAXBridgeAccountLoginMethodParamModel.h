@class NSString, NSDictionary;

@interface TTAXBridgeAccountLoginMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *loginMethod;
@property (copy, nonatomic) NSDictionary *context;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
