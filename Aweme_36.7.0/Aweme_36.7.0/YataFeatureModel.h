@class NSString, NSDictionary;

@interface YataFeatureModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *position;
@property (copy, nonatomic) NSString *placeHolderType;
@property (copy, nonatomic) NSString *nodeName;
@property (nonatomic) BOOL isAsyncHost;
@property (nonatomic) BOOL isPassiveChange;
@property (copy, nonatomic) NSString *collectionsJSONString;
@property (copy, nonatomic) NSDictionary *dynamicFeatures;
@property (nonatomic) BOOL extendBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isPlaceHolderType;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
