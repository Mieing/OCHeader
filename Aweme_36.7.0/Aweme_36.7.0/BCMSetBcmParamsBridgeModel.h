@class NSString, NSDictionary;

@interface BCMSetBcmParamsBridgeModel : BDXBridgeModel

@property (retain, nonatomic) NSString *paramType;
@property (retain, nonatomic) NSString *updateType;
@property (retain, nonatomic) NSDictionary *content;

+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)paramTypeEnum;
- (unsigned long long)updateTypeEnum;
- (void).cxx_destruct;

@end
