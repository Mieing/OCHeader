@class NSString, NSMutableDictionary, NSArray;

@interface YataFacadeModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *root;
@property (retain, nonatomic) NSMutableDictionary *structure;
@property (copy, nonatomic) NSArray *popupRootList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rootJSONTransformer;
+ (id)popupRootListJSONTransformer;
+ (id)structureJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
