@class BDPJSONSchema, NSString;

@interface BDPJSONSchemaConditionalValidator : NSObject <BDPJSONSchemaValidator>

@property (readonly, nonatomic) BDPJSONSchema *ifSchema;
@property (readonly, nonatomic) BDPJSONSchema *thenSchema;
@property (readonly, nonatomic) BDPJSONSchema *elseSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assignedKeywords;
+ (id)validatorWithDictionary:(id)a0 schemaFactory:(id)a1 error:(id *)a2;

- (id)subschemas;
- (BOOL)validateInstance:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)initWithIfSchema:(id)a0 thenSchema:(id)a1 elseSchema:(id)a2;
- (void).cxx_destruct;

@end
