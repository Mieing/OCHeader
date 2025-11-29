@class NSString, NSDictionary, BDPJSONSchema, BDPJSONSchemaValidationOptions;

@interface BDPJSONSchemaObjectPropertiesValidator : NSObject <BDPJSONSchemaValidator>

@property (readonly, nonatomic) BDPJSONSchemaValidationOptions *options;
@property (readonly, copy, nonatomic) NSDictionary *propertySchemas;
@property (readonly, nonatomic) BDPJSONSchema *additionalPropertiesSchema;
@property (readonly, nonatomic) BOOL additionalPropertiesAllowed;
@property (readonly, copy, nonatomic) NSDictionary *patternBasedPropertySchemas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assignedKeywords;
+ (id)validatorWithDictionary:(id)a0 schemaFactory:(id)a1 error:(id *)a2;

- (id)subschemas;
- (BOOL)validateInstance:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)initWithPropertySchemas:(id)a0 additionalPropertiesSchema:(id)a1 additionalPropertiesAllowed:(BOOL)a2 patternBasedPropertySchemas:(id)a3 options:(id)a4;
- (BOOL)enumerateSchemasForProperty:(id)a0 withBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
