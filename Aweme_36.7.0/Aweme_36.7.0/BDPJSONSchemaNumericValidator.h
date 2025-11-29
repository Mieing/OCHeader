@class NSDecimalNumber, NSNumber, NSString;

@interface BDPJSONSchemaNumericValidator : NSObject <BDPJSONSchemaValidator>

@property (readonly, nonatomic) NSDecimalNumber *multipleOf;
@property (readonly, nonatomic) NSNumber *maximum;
@property (readonly, nonatomic) BOOL exclusiveMaximum;
@property (readonly, nonatomic) NSNumber *minimum;
@property (readonly, nonatomic) BOOL exclusiveMinimum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assignedKeywords;
+ (id)validatorWithDictionary:(id)a0 schemaFactory:(id)a1 error:(id *)a2;
+ (BOOL)validateSchemaFormat:(id)a0 specification:(id)a1;

- (id)subschemas;
- (BOOL)validateInstance:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)initWithMultipleOf:(id)a0 maximum:(id)a1 exclusive:(BOOL)a2 minimum:(id)a3 exclusive:(BOOL)a4;
- (void).cxx_destruct;

@end
