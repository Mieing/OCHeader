@class NSString;

@interface BDPJSONSchemaArrayValidator : NSObject <BDPJSONSchemaValidator>

@property (readonly, nonatomic) unsigned long long maximumItems;
@property (readonly, nonatomic) unsigned long long minimumItems;
@property (readonly, nonatomic) BOOL uniqueItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assignedKeywords;
+ (id)validatorWithDictionary:(id)a0 schemaFactory:(id)a1 error:(id *)a2;
+ (BOOL)validateSchemaFormat:(id)a0;

@end
