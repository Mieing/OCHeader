@class NSString, NSArray;

@interface IESPolicyCleanResourceListModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *resourceType;
@property (copy, nonatomic) NSString *panel;
@property (copy, nonatomic) NSArray *resources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
