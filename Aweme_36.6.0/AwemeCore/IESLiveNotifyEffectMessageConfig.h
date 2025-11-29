@class NSArray, NSDictionary, NSString;

@interface IESLiveNotifyEffectMessageConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *configs;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
