@class NSString, NSArray, NSURL, BDPJSONSchemaSpecification, BDPJSONSchemaValidationOptions;

@interface BDPJSONSchema : NSObject

@property (readonly, nonatomic) NSURL *uri;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *schemaDescription;
@property (readonly, copy, nonatomic) NSArray *validators;
@property (readonly, copy, nonatomic) NSArray *subschemas;
@property (readonly, nonatomic) BDPJSONSchemaSpecification *specification;
@property (readonly, nonatomic) BDPJSONSchemaValidationOptions *options;

+ (id)validatorsMappingForMetaschemaURI:(id)a0 specification:(id)a1;
+ (BOOL)registerValidatorClass:(Class)a0 forMetaschemaURI:(id)a1 specification:(id)a2 withError:(id *)a3;
+ (void)registerAllValidators;
+ (id)schemaWithObject:(id)a0 baseURI:(id)a1 referenceStorage:(id)a2 specification:(id)a3 options:(id)a4 error:(id *)a5;

- (id)initWithScopeURI:(id)a0 title:(id)a1 description:(id)a2 validators:(id)a3 subschemas:(id)a4 specification:(id)a5 options:(id)a6;
- (BOOL)resolveReferencesWithSchemaStorage:(id)a0 error:(id *)a1;
- (BOOL)detectReferenceCyclesWithError:(id *)a0;
- (BOOL)visitUsingBlock:(id /* block */)a0;
- (BOOL)validateObject:(id)a0 inContext:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)description;
- (BOOL)validateObject:(id)a0 withError:(id *)a1;

@end
