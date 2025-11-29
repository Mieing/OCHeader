@interface JSONKeyMapper : NSObject

@property (readonly, nonatomic) id /* block */ JSONToModelKeyBlock;
@property (readonly, nonatomic) id /* block */ modelToJSONKeyBlock;

+ (id)swapKeysAndValuesInDictionary:(id)a0;
+ (id)mapperFromUnderscoreCaseToCamelCase;
+ (id)mapperForSnakeCase;
+ (id)mapperForTitleCase;
+ (id)mapperFromUpperCaseToLowerCase;
+ (id)mapper:(id)a0 withExceptions:(id)a1;
+ (id)baseMapper:(id)a0 withModelToJSONExceptions:(id)a1;

- (id)initWithJSONToModelBlock:(id /* block */)a0 modelToJSONBlock:(id /* block */)a1;
- (id)initWithModelToJSONBlock:(id /* block */)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithModelToJSONDictionary:(id)a0;
- (id)convertValue:(id)a0 isImportingToModel:(BOOL)a1;
- (id)convertValue:(id)a0;
- (void).cxx_destruct;

@end
