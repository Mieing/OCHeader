@class NSArray, UIFont, UIColor;

@interface AWEAnimatedNumberScrollConfig : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (copy, nonatomic) NSArray *defaultDigits;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *textColor;

- (void).cxx_destruct;

@end
