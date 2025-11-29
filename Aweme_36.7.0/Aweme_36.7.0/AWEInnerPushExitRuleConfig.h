@class NSArray, NSString;

@interface AWEInnerPushExitRuleConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *templateTagArray;
@property (copy, nonatomic) NSArray *groupTagArray;
@property (copy, nonatomic) NSArray *typeTagArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)templateTagArrayJSONTransformer;
+ (id)groupTagArrayJSONTransformer;
+ (id)typeTagArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
