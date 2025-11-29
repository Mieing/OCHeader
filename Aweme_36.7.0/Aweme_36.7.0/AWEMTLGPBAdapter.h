@class NSDictionary;

@interface AWEMTLGPBAdapter : NSObject

@property (readonly, nonatomic) Class modelClass;
@property (readonly, copy, nonatomic) NSDictionary *JSONKeyPathArrByPropertyKey;
@property (readonly, copy, nonatomic) NSDictionary *propertyKeysByJSONKey;
@property (readonly, copy, nonatomic) NSDictionary *propertyKeysByJSONFirstKeyPath;
@property (readonly, copy, nonatomic) NSDictionary *JSONKeyTransformerOptMap;
@property (readonly, copy, nonatomic) NSDictionary *valueTransformersByPropertyKey;
@property (readonly, nonatomic) BOOL hasClassForParsingJSON;
@property (readonly, nonatomic) BOOL enableFastDecode;

+ (void)setShouldReuseString:(BOOL)a0;
+ (id)adapterWithModelClass:(Class)a0;
+ (void)checkEquality:(id)a0 with:(id)a1 completionBlock:(id /* block */)a2;
+ (id)modelOfClass:(Class)a0 GPBMessage:(Class)a1 fromGPBData:(id)a2 error:(id *)a3;
+ (id)compareDict:(id)a0 with:(id)a1;
+ (id)compareArray:(id)a0 with:(id)a1;
+ (id)compareJSONObj:(id)a0 with:(id)a1;
+ (void)trackDiffEvent:(id)a0 rawModel:(id)a1;
+ (void)initialize;
+ (id)valueTransformersForModelClass:(Class)a0;
+ (id)NSURLJSONTransformer;
+ (id)NSUUIDJSONTransformer;

- (void)parseJSONKeyPaths;
- (id)modelOfGPBMessage:(Class)a0 fromGPBData:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithModelClass:(Class)a0;

@end
