@class NSString, BDPJSONSchemaSpecification;

@interface BDPJSONSchemaTypeValidator : NSObject <BDPJSONSchemaValidator>

@property (retain, nonatomic) BDPJSONSchemaSpecification *specification;
@property (readonly, nonatomic) unsigned long long types;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assignedKeywords;
+ (id)validatorWithDictionary:(id)a0 schemaFactory:(id)a1 error:(id *)a2;

- (id)subschemas;
- (BOOL)validateInstance:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)initWithTypes:(unsigned long long)a0 specification:(id)a1;
- (void).cxx_destruct;

@end
