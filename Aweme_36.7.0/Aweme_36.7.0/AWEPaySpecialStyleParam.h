@class UIFont, NSArray, NSDictionary, UIColor, NSString;

@interface AWEPaySpecialStyleParam : NSObject

@property (copy, nonatomic) NSDictionary *rawSettings;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (copy, nonatomic) NSArray *relativePosition;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) UIColor *fontColor;
@property (retain, nonatomic) UIColor *bgColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double animationTime;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) double leftOffset;
@property (nonatomic) double topOffset;
@property (nonatomic) double rightOffset;

- (double)getInsetAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)p_init;

@end
