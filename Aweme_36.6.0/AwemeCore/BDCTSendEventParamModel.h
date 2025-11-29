@class NSString, NSDictionary;

@interface BDCTSendEventParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *data;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
