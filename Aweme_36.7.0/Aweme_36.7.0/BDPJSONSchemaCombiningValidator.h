@class NSArray, BDPJSONSchema, NSString;

@interface BDPJSONSchemaCombiningValidator : NSObject <BDPJSONSchemaValidator>

@property (readonly, copy, nonatomic) NSArray *allOfSchemas;
@property (readonly, copy, nonatomic) NSArray *anyOfSchemas;
@property (readonly, copy, nonatomic) NSArray *oneOfSchemas;
@property (readonly, copy, nonatomic) BDPJSONSchema *notSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assignedKeywords;
+ (id)validatorWithDictionary:(id)a0 schemaFactory:(id)a1 error:(id *)a2;
+ (id)schemasArrayFromObject:(id)a0 factory:(id)a1 error:(id *)a2;
+ (BOOL)validateSchemasArrayObject:(id)a0;

- (id)subschemas;
- (BOOL)validateInstance:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)initWithAllOfSchemas:(id)a0 anyOfSchemas:(id)a1 oneOfSchemas:(id)a2 notSchema:(id)a3;
- (void).cxx_destruct;

@end
