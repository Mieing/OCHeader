@class UIFont, NSString, NSDictionary, UIImage, UIColor;

@interface AWEIMDescriptionViewContext : NSObject

@property (nonatomic) BOOL shouldUseBackground;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) double iconImageMarginLeft;
@property (copy, nonatomic) NSString *templateText;
@property (retain, nonatomic) NSDictionary *templateActions;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *linkColor;

- (void).cxx_destruct;

@end
