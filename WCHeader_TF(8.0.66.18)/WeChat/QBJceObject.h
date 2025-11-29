@interface QBJceObject : NSObject <NSCoding>

+ (id)qb_objectWithName:(id)a0 andType:(id)a1 inAttributes:(id)a2;
+ (id)qb_objectWithAttributeData:(id)a0;
+ (id)jcePropertiesWithEncodedTypes;
+ (id)object;
+ (id)fromData:(id)a0;
+ (id)jceType;

- (void)qb_setInAttributes:(id)a0 withName:(id)a1 andType:(id)a2;
- (id)fromData:(id)a0;
- (id)toData;
- (id)jceType;
- (void)__pack:(id)a0;
- (void)__unpack:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
