@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface AWERootModel : NSObject <NSCopying, NSCoding, AWERootModelSubclassOverride>

@property (class, copy, nonatomic) NSDictionary *propertyInfosMap;
@property (class, copy, nonatomic) NSArray *propertyInfosArrayForEquality;
@property (class, copy, nonatomic) NSArray *propertyInfosArrayForCopying;
@property (class, copy, nonatomic) NSArray *propertyInfosArrayForCoding;
@property (class, nonatomic) void /* function */ *getDefaultValuesFunc;
@property (class, readonly, nonatomic) BOOL optimizeRootModelSerialization;

@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } localPropertiesLock;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } innerStorageLock;
@property (retain, nonatomic) NSMutableDictionary *innerStorageDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awesonic_modelWithData:(id)a0 error:(id *)a1;
+ (id)awesonic_modelWithData:(id)a0;
+ (id)modelWithJSONDictionary:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)customValueTransformerForModelClass;
+ (id)getPropertiesToKeyPathsMap;
+ (id)modelWithJSONDictionary:(id)a0 sharedModelInfos:(id)a1;
+ (id)propertyKeysArray;
+ (id)propertyToOptionsMap;
+ (id)getJSONAdapter;
+ (void)parseAllPropertyInfos;
+ (void)parseGetDefaultValuesFunc;
+ (void)parseCurrentPropertyInfos;
+ (id)localPropertyKeysMap;
+ (void)initialize;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setValue:(id)a0 forStorageKey:(id)a1;
- (id)getValueWithStorageKey:(id)a0;
- (void)awe_addLocalPropertyKey:(const void *)a0;
- (id)toJSONDictionary;
- (void)lockLocalProperties;
- (void)unLockLocalProperties;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)getDefaultValues;

@end
