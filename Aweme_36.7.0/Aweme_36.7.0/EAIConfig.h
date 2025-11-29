@class NSArray, NSString;

@interface EAIConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *triggerEvents;
@property (retain, nonatomic) NSArray *eventRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)triggerEventsJSONTransformer;
+ (id)eventRulesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
