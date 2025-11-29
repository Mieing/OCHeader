@class NSString;

@interface YYTextBackedString : NSObject <NSCoding, NSCopying>

@property (copy, nonatomic) NSString *string;

+ (id)stringWithString:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
