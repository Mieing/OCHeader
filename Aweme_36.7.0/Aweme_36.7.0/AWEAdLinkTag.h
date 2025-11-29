@class UIColor, NSString, UIFont, UIImage;

@interface AWEAdLinkTag : NSObject <AWEAdLinkTag>

@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIImage *leadingIcon;
@property (nonatomic) struct CGSize { double width; double height; } leadingIconSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } leadingIconFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textFrame;
@property (nonatomic) struct CGSize { double width; double height; } resolvedSize;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIFont *font;
@property (readonly, nonatomic) BOOL isLeadingIconHidden;
@property (readonly, nonatomic) UIColor *leadingIconColor;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (readonly, nonatomic) double spacing;
@property (readonly, nonatomic) BOOL shouldHollowContentOut;
@property (readonly, nonatomic) double alpha;
@property (readonly, nonatomic) double designatedHeight;
@property (readonly, nonatomic) double constraiendWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithText:(id)a0 textColor:(id)a1 backgroundColor:(id)a2 font:(id)a3 spacing:(double)a4 isLeadingIconHidden:(double)a5 leadingIconColor:(id)a6 contentEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a7 shouldHollowContentOut:(BOOL)a8 alpha:(double)a9 designatedHeight:(double)a10 constrainedWidth:(double)a11;
- (void).cxx_destruct;
- (void)layout;

@end
