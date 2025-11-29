@class UIColor, NSString;

@interface PAGText : NSObject

@property (nonatomic) BOOL applyFill;
@property (nonatomic) BOOL applyStroke;
@property (nonatomic) float baselineShift;
@property (nonatomic) BOOL boxText;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boxTextRect;
@property (nonatomic) float firstBaseLine;
@property (nonatomic) BOOL fauxBold;
@property (nonatomic) BOOL fauxItalic;
@property (retain, nonatomic) UIColor *fillColor;
@property (copy, nonatomic) NSString *fontFamily;
@property (copy, nonatomic) NSString *fontStyle;
@property (nonatomic) float fontSize;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) BOOL strokeOverFill;
@property (nonatomic) float strokeWidth;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) unsigned char justification;
@property (nonatomic) float leading;
@property (nonatomic) float tracking;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) int backgroundAlpha;

- (void)dealloc;

@end
