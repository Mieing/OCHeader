@class NSURL, BDPJSONSchema;

@interface BDPJSONSchemaReference : BDPJSONSchema

@property (readonly, nonatomic) NSURL *referenceURI;
@property (readonly, weak, nonatomic) BDPJSONSchema *referencedSchema;

- (void)resolveReferenceWithSchema:(id)a0;
- (BOOL)validateObject:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)initWithScopeURI:(id)a0 referenceURI:(id)a1 subschemas:(id)a2 specification:(id)a3 options:(id)a4;
- (void).cxx_destruct;
- (id)description;

@end
