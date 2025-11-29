@class NSArray, NSString;

@interface EAIConfigMapValueRuleContent : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *keys;
@property (retain, nonatomic) NSArray *values;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
