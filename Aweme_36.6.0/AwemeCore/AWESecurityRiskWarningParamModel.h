@class NSString;

@interface AWESecurityRiskWarningParamModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long paramType;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
