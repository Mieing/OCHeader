@class NSDictionary, NSMapTable;
@protocol MTLJSONSerializing;

@interface MTLJSONAdapter : NSObject

@property (readonly, nonatomic) id<MTLJSONSerializing> model;
@property (readonly, nonatomic) Class modelClass;
@property (readonly, copy, nonatomic) NSDictionary *JSONKeyPathsByPropertyKey;
@property (readonly, copy, nonatomic) NSDictionary *valueTransformersByPropertyKey;
@property (readonly, nonatomic) NSMapTable *JSONAdaptersByModelClass;

+ (id)CMTimeJSONValueTransformer;
+ (id)traverseArrayTransformerWithModelClass:(Class)a0;
+ (id)traverseArrayTransformerWithModelClass:(Class)a0 valueNodeForwardBlock:(id /* block */)a1 reverseBlock:(id /* block */)a2;
+ (id)CMTimeRangeJSONValueTransformer;
+ (id)traverseDictionaryTransformerWithModelClass:(Class)a0 valueNodeForwardBlock:(id /* block */)a1 reverseBlock:(id /* block */)a2;
+ (id)adapterWithModelClass:(Class)a0;
+ (void)enableCustomValueTransformerOptimize;
+ (void)awe_enableMTLJSONAdapterCodeGenAdapt;
+ (id)awecodegenadapter_valueTransformersForModelClass:(Class)a0;
+ (id)ieseclistkit_jsonStringToModelTransformer:(Class)a0;
+ (id)ieseclistkit_stringToColorTransformer;
+ (id)ieseclistkit_modelValueDictionaryTransformer:(Class)a0;
+ (void)initialize;
+ (id)JSONDictionaryFromModel:(id)a0 error:(id *)a1;
+ (id)modelOfClass:(Class)a0 fromJSONDictionary:(id)a1 error:(id *)a2;
+ (id)modelsOfClass:(Class)a0 fromJSONArray:(id)a1 error:(id *)a2;
+ (id)JSONArrayFromModels:(id)a0 error:(id *)a1;
+ (id)valueTransformersForModelClass:(Class)a0;
+ (id)transformerForModelPropertiesOfClass:(Class)a0;
+ (id)transformerForModelPropertiesOfObjCType:(const char *)a0;
+ (id)dictionaryTransformerWithModelClass:(Class)a0;
+ (id)arrayTransformerWithModelClass:(Class)a0;
+ (id)NSURLJSONTransformer;
+ (id)NSUUIDJSONTransformer;
+ (id)JSONArrayFromModels:(id)a0;
+ (id)JSONDictionaryFromModel:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)JSONDictionaryFromModel:(id)a0 error:(id *)a1;
- (id)serializablePropertyKeys:(id)a0 forModel:(id)a1;
- (id)initWithModelClass:(Class)a0;
- (id)modelFromJSONDictionary:(id)a0 error:(id *)a1;
- (id)JSONAdapterForModelClass:(Class)a0 error:(id *)a1;

@end
