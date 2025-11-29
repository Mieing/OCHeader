@class NSString;

@interface JSONModel : NSObject <AbstractJSONModelProtocol, NSSecureCoding> {
    NSString *_description;
}

+ (void)load;
+ (id)arrayOfModelsFromDictionaries:(id)a0;
+ (id)arrayOfModelsFromData:(id)a0 error:(id *)a1;
+ (id)arrayOfModelsFromString:(id)a0 error:(id *)a1;
+ (id)arrayOfModelsFromDictionaries:(id)a0 error:(id *)a1;
+ (id)dictionaryOfModelsFromString:(id)a0 error:(id *)a1;
+ (id)dictionaryOfModelsFromData:(id)a0 error:(id *)a1;
+ (id)dictionaryOfModelsFromDictionary:(id)a0 error:(id *)a1;
+ (id)arrayOfDictionariesFromModels:(id)a0;
+ (id)arrayOfDictionariesFromModels:(id)a0 propertyNamesToExport:(id)a1;
+ (id)dictionaryOfDictionariesFromModels:(id)a0;
+ (id)keyMapper;
+ (void)setGlobalKeyMapper:(id)a0;
+ (BOOL)propertyIsOptional:(id)a0;
+ (BOOL)propertyIsIgnored:(id)a0;
+ (id)protocolForArrayProperty:(id)a0;
+ (Class)classForCollectionProperty:(id)a0;
+ (BOOL)supportsSecureCoding;

- (void)__setup__;
- (id)init;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithString:(id)a0 error:(id *)a1;
- (id)initWithString:(id)a0 usingEncoding:(unsigned long long)a1 error:(id *)a2;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)__keyMapper;
- (BOOL)__doesDictionary:(id)a0 matchModelWithKeyMapper:(id)a1 error:(id *)a2;
- (id)__mapString:(id)a0 withKeyMapper:(id)a1;
- (BOOL)__importDictionary:(id)a0 withKeyMapper:(id)a1 validation:(BOOL)a2 error:(id *)a3;
- (BOOL)__isJSONModelSubClass:(Class)a0;
- (id)__requiredPropertyNames;
- (id)__properties__;
- (void)__inspectProperties;
- (id)__transform:(id)a0 forProperty:(id)a1 error:(id *)a2;
- (id)__reverseTransform:(id)a0 forProperty:(id)a1;
- (BOOL)__customSetValue:(id)a0 forProperty:(id)a1;
- (BOOL)__customGetValue:(id *)a0 forProperty:(id)a1;
- (void)__createDictionariesForKeyPath:(id)a0 inDictionary:(id *)a1;
- (id)toDictionary;
- (id)toJSONString;
- (id)toJSONData;
- (id)toDictionaryWithKeys:(id)a0;
- (id)toJSONDataWithKeys:(id)a0;
- (id)toJSONStringWithKeys:(id)a0;
- (id)indexPropertyName;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (BOOL)validate:(id *)a0;
- (id)description;
- (void)mergeFromDictionary:(id)a0 useKeyMapping:(BOOL)a1;
- (BOOL)mergeFromDictionary:(id)a0 useKeyMapping:(BOOL)a1 error:(id *)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
