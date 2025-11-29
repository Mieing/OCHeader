@class NSArray, NSDictionary, NSString;

@interface IESLiveNotifyEffectConfigItem : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long forAnchor;
@property (copy, nonatomic) NSArray *scenes;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scenesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
