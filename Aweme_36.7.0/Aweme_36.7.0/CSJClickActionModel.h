@interface CSJClickActionModel : NSObject

@property (nonatomic) long long cta;
@property (nonatomic) long long other;

- (long long)ctaCheckDefaultValue:(long long)a0;
- (long long)otherCheckDefaultValue:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
