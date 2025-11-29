@interface BDUGLuckyBDModel : BDUGLuckyJSONModel

+ (BOOL)enableBDModel;
+ (unsigned long long)modelCustomMappingOptions;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
