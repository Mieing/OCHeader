@class NSString, UIColor, UIFont;

@interface AWEPaymentBadgeConfig : NSObject

@property (nonatomic) double viewHeight;
@property (copy, nonatomic) NSString *fontName;
@property (nonatomic) double fontSize;
@property (nonatomic) double margin;
@property (nonatomic) BOOL disableAddCornerBackground;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) BOOL ignoreVipStyle;
@property (nonatomic) BOOL trimVipPrefix;

- (void).cxx_destruct;

@end
