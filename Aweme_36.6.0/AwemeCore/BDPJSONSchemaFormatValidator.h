@class NSString;

@interface BDPJSONSchemaFormatValidator : NSObject <BDPJSONSchemaValidator>

@property (readonly, copy, nonatomic) NSString *formatName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assignedKeywords;
+ (id)validatorWithDictionary:(id)a0 schemaFactory:(id)a1 error:(id *)a2;
+ (id)dateTimeRegularExpression;
+ (BOOL)registerFormat:(id)a0 withRegularExpression:(id)a1 error:(id *)a2;
+ (id)dateRegularExpression;
+ (id)timeRegularExpression;
+ (id)emailRegularExpression;
+ (id)hostnameRegularExpression;
+ (id)URIRegularExpression;
+ (id)URIReferenceRegularExpression;
+ (id /* block */)IPv4AddressValidationBlock;
+ (BOOL)registerFormat:(id)a0 withBlock:(id /* block */)a1 error:(id *)a2;
+ (id /* block */)IPv6AddressValidationBlock;
+ (id /* block */)regexpValidationBlock;
+ (id)regularExpressionForFormat:(id)a0;
+ (id /* block */)validationBlockForFormat:(id)a0;
+ (id)dateRegularExpressionString;
+ (id)timeRegularExpressionString;
+ (void)initialize;

- (id)subschemas;
- (BOOL)validateInstance:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)initWithFormatName:(id)a0;
- (void).cxx_destruct;

@end
