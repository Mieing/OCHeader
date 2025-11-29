@class NSNumber, UIColor, YYTextShadow;

@interface YYTextDecoration : NSObject <NSCoding, NSCopying>

@property (nonatomic) long long style;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) YYTextShadow *shadow;

+ (id)decorationWithStyle:(long long)a0;
+ (id)decorationWithStyle:(long long)a0 width:(id)a1 color:(id)a2;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
