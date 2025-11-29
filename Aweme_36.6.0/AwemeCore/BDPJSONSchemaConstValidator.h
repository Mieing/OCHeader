@class NSString;

@interface BDPJSONSchemaConstValidator : NSObject <BDPJSONSchemaValidator>

@property (readonly, nonatomic) id value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assignedKeywords;
+ (id)validatorWithDictionary:(id)a0 schemaFactory:(id)a1 error:(id *)a2;

- (id)subschemas;
- (BOOL)validateInstance:(id)a0 inContext:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0;

@end
