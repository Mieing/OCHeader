@class NSString, NSDictionary, NSArray;

@interface IESECHeaderSliceAction : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *fields;
@property (copy, nonatomic) NSArray *actions;
@property (nonatomic) BOOL disable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
