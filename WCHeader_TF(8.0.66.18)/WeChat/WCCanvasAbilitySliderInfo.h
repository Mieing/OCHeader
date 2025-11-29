@class NSString;

@interface WCCanvasAbilitySliderInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSString *label;
@property (nonatomic) double value;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) NSString *foregroundColor;
@property (retain, nonatomic) NSString *foregroundImage;
@property (retain, nonatomic) NSString *backgroundImage;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
