@class NSString;

@interface BDPJSONSchemaContentValidator : NSObject <BDPJSONSchemaValidator>

@property (readonly, copy, nonatomic) NSString *mediaType;
@property (readonly, copy, nonatomic) NSString *encoding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assignedKeywords;
+ (id)validatorWithDictionary:(id)a0 schemaFactory:(id)a1 error:(id *)a2;
+ (id /* block */)base64ContentDecoderBlock;
+ (BOOL)registerEncoding:(id)a0 withBlock:(id /* block */)a1 error:(id *)a2;
+ (id /* block */)applicationJSONContentTypeValidatorBlock;
+ (BOOL)registerMediaType:(id)a0 withBlock:(id /* block */)a1 error:(id *)a2;
+ (id /* block */)decoderBlockForEncoding:(id)a0;
+ (id /* block */)contentValidatorBlockForMediaType:(id)a0;
+ (void)initialize;

- (id)subschemas;
- (BOOL)validateInstance:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)initWithMediaType:(id)a0 encoding:(id)a1;
- (void).cxx_destruct;

@end
