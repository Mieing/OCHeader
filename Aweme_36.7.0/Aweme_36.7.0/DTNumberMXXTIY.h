@class NSNumber;

@interface DTNumberMXXTIY : NSObject <NSCoding>

@property (copy, nonatomic) NSNumber *number;

- (unsigned long long)unsignedLongLongValue;
- (char)charValue;
- (id)initWithUnsignedChar:(unsigned char)a0;
- (long long)compare:(id)a0;
- (unsigned int)unsignedIntValue;
- (void).cxx_destruct;
- (id)initWithDouble:(double)a0;
- (unsigned char)unsignedCharValue;
- (id)initWithFloat:(float)a0;
- (float)floatValue;
- (unsigned long long)unsignedLongValue;
- (int)intValue;
- (id)initWithChar:(char)a0;
- (id)description;
- (id)initWithLong:(long long)a0;
- (unsigned short)unsignedShortValue;
- (short)shortValue;
- (unsigned long long)unsignedIntegerValue;
- (BOOL)boolValue;
- (double)doubleValue;
- (long long)longLongValue;
- (long long)longValue;
- (id)initWithInteger:(long long)a0;
- (id)initWithLongLong:(long long)a0;
- (id)initWithUnsignedInt:(unsigned int)a0;
- (id)initWithUnsignedLongLong:(unsigned long long)a0;
- (id)initWithShort:(short)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)stringValue;
- (id)initWithUnsignedShort:(unsigned short)a0;
- (id)initWithUnsignedInteger:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithBool:(BOOL)a0;
- (long long)integerValue;
- (id)initWithUnsignedLong:(unsigned long long)a0;
- (id)initWithInt:(int)a0;
- (BOOL)isEqualToNumber:(id)a0;

@end
