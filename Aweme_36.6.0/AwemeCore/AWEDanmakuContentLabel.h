@class NSString, NSArray, UIColor;

@interface AWEDanmakuContentLabel : UILabel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *danmakuText;
@property (copy, nonatomic) NSArray *danmakuStyleList;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double strokeWidth;

- (void)setTextColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textColor:(id)a1 type:(long long)a2;
- (void)setupShadowIfNeed;
- (void)drawUnderLineWithStart:(long long)a0 len:(long long)a1;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAccessibilityLabel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
