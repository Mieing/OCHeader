@interface MMDynamicColor : NSObject

@property (readonly, nonatomic) long long normalColor;
@property (readonly, nonatomic) long long darkmodeColor;

+ (long long)hexFromColor:(id)a0;
+ (id)fromWCColor:(id)a0;
+ (id)colorFromARGBString:(id)a0;
+ (id)DynamicColorWithNormalColor:(long long)a0 darkmodeColor:(long long)a1;

- (id)toColor;
- (id)initWithNormalColor:(long long)a0 darkmodeColor:(long long)a1;
- (id)description;

@end
