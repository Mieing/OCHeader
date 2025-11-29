@class NSString, NSSet;

@interface AWEPzScopeModel : MTLModel <MTLJSONSerializing, AWEPzScopeModelProtocol, NSCopying>

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSSet *cTags;
@property (copy, nonatomic) NSSet *sTags;
@property (copy, nonatomic) NSString *componentType;
@property (copy, nonatomic) NSString *componentID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scopeWithObject:(id)a0;
+ (id)cTagsJSONTransformer;
+ (id)sTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
