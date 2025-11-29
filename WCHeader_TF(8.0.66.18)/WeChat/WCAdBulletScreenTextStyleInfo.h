@class NSString;

@interface WCAdBulletScreenTextStyleInfo : NSObject <NSCoding>

@property (nonatomic) double fontSize;
@property (nonatomic) double fontSizeMax;
@property (retain, nonatomic) NSString *color;
@property (retain, nonatomic) NSString *fontWeight;
@property (retain, nonatomic) NSString *backgroundColor;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
