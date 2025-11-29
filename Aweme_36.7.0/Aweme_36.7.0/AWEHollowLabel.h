@class UIColor, UIFont, NSString, NSTextContainer, NSTextStorage, NSLayoutManager;

@interface AWEHollowLabel : UIView

@property (nonatomic) BOOL shouldReconfigTextKit;
@property (retain, nonatomic) NSTextStorage *textStorage;
@property (retain, nonatomic) NSLayoutManager *layoutManager;
@property (retain, nonatomic) NSTextContainer *textContainer;
@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textInsets;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) double maxWidth;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long lineBreakMode;

- (void)setupTextKit;
- (void)configTextKit;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })labelSize;

@end
