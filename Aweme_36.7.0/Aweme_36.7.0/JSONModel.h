@class NSString;

@interface JSONModel : NSObject <AbstractJSONModelProtocol, NSSecureCoding> {
    NSString *_description;
}

@property (nonatomic) BOOL isLoading;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (void)getModelFromURLWithString:(id)a0 completion:(id /* block */)a1;
+ (void)postModel:(id)a0 toURLWithString:(id)a1 completion:(id /* block */)a2;
+ (BOOL)propertyIsIgnored:(id)a0;
+ (Class)classForCollectionProperty:(id)a0;
+ (id)arrayOfModelsFromDictionaries:(id)a0 error:(id *)a1;
+ (id)arrayOfModelsFromData:(id)a0 error:(id *)a1;
+ (id)dictionaryOfModelsFromData:(id)a0 error:(id *)a1;
+ (id)dictionaryOfModelsFromDictionary:(id)a0 error:(id *)a1;
+ (id)protocolForArrayProperty:(id)a0;
+ (id)arrayOfModelsFromDictionaries:(id)a0;
+ (id)arrayOfModelsFromString:(id)a0 error:(id *)a1;
+ (id)dictionaryOfModelsFromString:(id)a0 error:(id *)a1;
+ (id)arrayOfDictionariesFromModels:(id)a0;
+ (id)arrayOfDictionariesFromModels:(id)a0 propertyNamesToExport:(id)a1;
+ (id)dictionaryOfDictionariesFromModels:(id)a0;
+ (void)setGlobalKeyMapper:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (void)load;

- (id)toJSONString;
- (id)initWithString:(id)a0 usingEncoding:(unsigned long long)a1 error:(id *)a2;
- (id)initFromURLWithString:(id)a0 completion:(id /* block */)a1;
- (void)__inspectProperties;
- (void)__setup__;
- (id)__keyMapper;
- (BOOL)__doesDictionary:(id)a0 matchModelWithKeyMapper:(id)a1 error:(id *)a2;
- (BOOL)__importDictionary:(id)a0 withKeyMapper:(id)a1 validation:(BOOL)a2 error:(id *)a3;
- (id)__requiredPropertyNames;
- (id)__properties__;
- (id)__mapString:(id)a0 withKeyMapper:(id)a1;
- (BOOL)__customSetValue:(id)a0 forProperty:(id)a1;
- (BOOL)__isJSONModelSubClass:(Class)a0;
- (id)__transform:(id)a0 forProperty:(id)a1 error:(id *)a2;
- (void)__createDictionariesForKeyPath:(id)a0 inDictionary:(id *)a1;
- (id)toDictionaryWithKeys:(id)a0;
- (id)toJSONStringWithKeys:(id)a0;
- (id)toJSONDataWithKeys:(id)a0;
- (BOOL)__customGetValue:(id *)a0 forProperty:(id)a1;
- (id)__reverseTransform:(id)a0 forProperty:(id)a1;
- (id)indexPropertyName;
- (BOOL)mergeFromDictionary:(id)a0 useKeyMapping:(BOOL)a1 error:(id *)a2;
- (id)toJSONData;
- (void)mergeFromDictionary:(id)a0 useKeyMapping:(BOOL)a1;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void)setIsLoading:(BOOL)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isLoading;
- (BOOL)isEqual:(id)a0;
- (BOOL)validate:(id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithString:(id)a0 error:(id *)a1;

@end
