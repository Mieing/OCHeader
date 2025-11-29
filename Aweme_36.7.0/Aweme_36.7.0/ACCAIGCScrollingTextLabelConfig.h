@class NSArray, UIFont, UIColor;

@interface ACCAIGCScrollingTextLabelConfig : NSObject

@property (copy, nonatomic) NSArray *textArray;
@property (nonatomic) double animationInterval;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL shouldRepeat;

- (void).cxx_destruct;

@end
