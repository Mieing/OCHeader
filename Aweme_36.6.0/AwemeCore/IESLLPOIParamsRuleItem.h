@class NSString, NSArray;

@interface IESLLPOIParamsRuleItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSString *owner;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *iOSVersion;
@property (copy, nonatomic) NSArray *paramConfigs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paramConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
