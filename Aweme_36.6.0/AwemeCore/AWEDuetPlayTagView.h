@class UIColor, NSAttributedString, UIImage;

@interface AWEDuetPlayTagView : UIView

@property (nonatomic) double cornerRadius;
@property (nonatomic) double maxWidth;
@property (nonatomic) double defaultFontSize;
@property (retain, nonatomic) NSAttributedString *title;
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIImage *shapeImage;
@property (nonatomic) double imageLeftOffset;
@property (nonatomic) double topPadding;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textInsets;

+ (BOOL)replaceOperationAvailableForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inText:(id)a1;
+ (id)attributedStringByTruncatingString:(id)a0 toWidth:(double)a1;
+ (double)calculateTagViewWidthWithTitleWidth:(double)a0 imageWidth:(double)a1 maxWidth:(double)a2 isShowInFeed:(BOOL)a3;
+ (id)defaultDuetTagViewWithTitle:(id)a0 maxWidth:(double)a1 isShowInFeed:(BOOL)a2;

- (void)updateTagViewWithFont:(id)a0 maxWidth:(double)a1 isShowInFeed:(BOOL)a2;
- (void)updateTagViewWithLargeFontAdaptedWithFontSize:(double)a0 imgSize:(struct CGSize { double x0; double x1; })a1 containerHeight:(double)a2 maxWidth:(double)a3 isShowInFeed:(BOOL)a4;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
