@class EditImageTextBgView, UIColor, WCEditVideoColorConfig;

@interface EditImageTextView : MMTextView

@property (retain, nonatomic) EditImageTextBgView *textBgView;
@property (retain, nonatomic) WCEditVideoColorConfig *colorConfig;
@property (nonatomic) unsigned long long textStyle;
@property (retain, nonatomic) UIColor *mainColor;
@property (nonatomic) double scale;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double highlightAlpha;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } minimumContentInsets;

- (void)layoutSubviews;
- (void)recenter;
- (void)setupEmotionColorConfig;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textChanged:(id)a0;
- (void)updateBackgroundRects;
- (void).cxx_destruct;

@end
