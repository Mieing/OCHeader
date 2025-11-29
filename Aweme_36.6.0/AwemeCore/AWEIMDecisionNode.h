@class NSString, NSArray;

@interface AWEIMDecisionNode : MTLModel <MTLJSONSerializing, AWEIMStrategyConfigResponseCompactNodeProtocol>

@property (copy, nonatomic) NSString *nodeType;
@property (copy, nonatomic) NSString *nodeAttribute;
@property (copy, nonatomic) NSString *nodeOperation;
@property (copy, nonatomic) NSString *nodeValue;
@property (copy, nonatomic) NSString *configName;
@property (copy, nonatomic) NSArray *subNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *nodeIndex;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)subNodeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
