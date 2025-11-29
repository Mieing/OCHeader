@class NSString, NSArray;

@interface EAIConfigTriggerEvent : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *algorithmName;
@property (copy, nonatomic) NSString *taskName;
@property (retain, nonatomic) NSArray *eventConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventConstraintsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
