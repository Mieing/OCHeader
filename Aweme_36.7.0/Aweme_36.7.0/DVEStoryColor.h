@class NSArray, UIColor, NSString;

@interface DVEStoryColor : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *colorRGBA;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) NSString *colorString;
@property (retain, nonatomic) UIColor *borderColor;

+ (id)colorWithTextColorHexString:(id)a0 borderColorHexString:(id)a1;
+ (id)colorWithHexString:(id)a0;

- (id)convertToEffectValue;
- (id)initWithEffectValue:(id)a0;
- (id)initWithTextHexString:(id)a0 borderHexString:(id)a1;
- (id)colorFromHexString:(id)a0;
- (id)initWithText:(id)a0 border:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
