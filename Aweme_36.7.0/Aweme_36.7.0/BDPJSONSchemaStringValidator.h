@class NSRegularExpression, NSString;

@interface BDPJSONSchemaStringValidator : NSObject <BDPJSONSchemaValidator>

@property (readonly, nonatomic) unsigned long long maximumLength;
@property (readonly, nonatomic) unsigned long long minimumLength;
@property (readonly, nonatomic) NSRegularExpression *regularExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assignedKeywords;
+ (id)validatorWithDictionary:(id)a0 schemaFactory:(id)a1 error:(id *)a2;
+ (BOOL)validateSchemaFormat:(id)a0;

- (id)subschemas;
- (BOOL)validateInstance:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)initWithMaximumLength:(unsigned long long)a0 minimumLength:(unsigned long long)a1 regularExpression:(id)a2;
- (void).cxx_destruct;

@end
