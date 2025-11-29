@class NSDictionary, NSString;

@interface BDPJSONSchemaDependenciesValidator : NSObject <BDPJSONSchemaValidator>

@property (readonly, copy, nonatomic) NSDictionary *schemaDependencies;
@property (readonly, copy, nonatomic) NSDictionary *propertyDependencies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assignedKeywords;
+ (id)validatorWithDictionary:(id)a0 schemaFactory:(id)a1 error:(id *)a2;

- (id)subschemas;
- (BOOL)validateInstance:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)initWithSchemaDependencies:(id)a0 propertyDependencies:(id)a1;
- (void).cxx_destruct;

@end
