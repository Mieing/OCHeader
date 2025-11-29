@class BDPJSONSchema;

@interface BDPJSONSchemaValidationContextPair : NSObject

@property (readonly, nonatomic) BDPJSONSchema *schema;
@property (readonly, nonatomic) id object;

- (id)initWithSchema:(id)a0 object:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqualToPair:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
