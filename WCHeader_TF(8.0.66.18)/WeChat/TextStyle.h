@class UIFont, NSString, UIColor, TextStyleAttributeObj;

@interface TextStyle : BaseStyle

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } drawFrame;
@property (retain, nonatomic) UIFont *oFont;
@property (retain, nonatomic) NSString *nsContent;
@property (nonatomic) struct CGSize { double width; double height; } shadowOffset;
@property (nonatomic) double shadowBlurRadius;
@property (nonatomic) BOOL customShadow;
@property (retain, nonatomic) TextStyleAttributeObj *textAttributeObj;
@property (nonatomic) BOOL bNewLine;
@property (nonatomic) BOOL bShowTruncatingTail;
@property (nonatomic) long long inlineVerticalAlign;
@property (retain) UIColor *oTextColor;
@property (retain) UIColor *oDrawColor;
@property (retain) UIColor *oDrawHLColor;
@property (retain) UIColor *shadowColor;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } highlightRange;

- (id)init;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;

@end
