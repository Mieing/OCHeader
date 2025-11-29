@class NSSet, NSString;

@interface BDPJSONSchemaObjectValidator : NSObject <BDPJSONSchemaValidator>

@property (readonly, nonatomic) unsigned long long maximumProperties;
@property (readonly, nonatomic) unsigned long long minimumProperties;
@property (readonly, copy, nonatomic) NSSet *requiredProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assignedKeywords;
+ (id)validatorWithDictionary:(id)a0 schemaFactory:(id)a1 error:(id *)a2;
+ (BOOL)validateSchemaFormat:(id)a0 specification:(id)a1;

- (id)subschemas;
- (BOOL)validateInstance:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)initWithMaximumProperties:(unsigned long long)a0 minimumProperties:(unsigned long long)a1 requiredProperties:(id)a2;
- (void).cxx_destruct;

@end
