@class NSArray, NSString;

@interface AWEIMServiceChatRoleExpressionResponse : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *texts;
@property (copy, nonatomic) NSArray *firstLineItems;
@property (copy, nonatomic) NSArray *secondLineItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)firstLineItemsJSONTransformer;
+ (id)secondLineItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)transToString;
- (void).cxx_destruct;

@end
