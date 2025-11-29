@class NSString;

@interface AWEMessageTipMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *type;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
