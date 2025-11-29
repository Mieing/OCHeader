@class NSArray, NSString;

@interface AWEIMSkylightGroupSortConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *groupSortArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)groupSortArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
