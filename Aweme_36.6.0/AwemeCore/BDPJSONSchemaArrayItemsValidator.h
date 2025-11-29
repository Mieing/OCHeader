@class BDPJSONSchema, NSArray, NSString;

@interface BDPJSONSchemaArrayItemsValidator : NSObject <BDPJSONSchemaValidator>

@property (readonly, nonatomic) BDPJSONSchema *itemsSchema;
@property (readonly, copy, nonatomic) NSArray *itemSchemas;
@property (readonly, nonatomic) BDPJSONSchema *additionalItemsSchema;
@property (readonly, nonatomic) BOOL additionalItemsAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assignedKeywords;
+ (id)validatorWithDictionary:(id)a0 schemaFactory:(id)a1 error:(id *)a2;

- (id)subschemas;
- (BOOL)validateInstance:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)initWithItemsSchema:(id)a0 orItemSchemas:(id)a1 additionalItemsSchema:(id)a2 additionalItemsAllowed:(BOOL)a3;
- (id)schemaForInstanceItemAtIndex:(unsigned long long)a0 failureReason:(id *)a1;
- (void).cxx_destruct;

@end
