@class NSString;

@interface BDPJSONSchemaBooleanSchemaValidator : NSObject <BDPJSONSchemaValidator>

@property (readonly, nonatomic) BOOL schemaValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assignedKeywords;
+ (id)validatorWithDictionary:(id)a0 schemaFactory:(id)a1 error:(id *)a2;

@end
