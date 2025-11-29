@class NSArray, NSString;

@interface IESPolicyCleanRequestModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *resourceList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
