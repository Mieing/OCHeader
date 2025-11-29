@interface IESECShopHTTPVerifiedKey : IESECObjectWrapper <NSCopying>

@property (nonatomic) unsigned long long keyPreference;

+ (id)requiredKey:(id)a0;
+ (id)optionalKey:(id)a0;
+ (id)verifiedKeysWithDictionary:(id)a0 requiredKeys:(id)a1;

- (id)initWithKey:(id)a0 preference:(unsigned long long)a1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isRequired;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
