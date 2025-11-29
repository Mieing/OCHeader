@class NSString, NSArray, NSDictionary;

@interface AWEIMInputActionBarSortGroup : MTLModel <BDModelCustom, MTLJSONSerializing, AWEIMStrategyConfigResponseCompactNodeProtocol>

@property (nonatomic) double priority;
@property (nonatomic) long long operation;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *sortPlaceholder;
@property (copy, nonatomic) NSDictionary *orderPriorities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *nodeIndex;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (id)buildIndexNodeData;
- (void)clearIndexNodeData;
- (void)fillIndexNodeDataWithModel:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
