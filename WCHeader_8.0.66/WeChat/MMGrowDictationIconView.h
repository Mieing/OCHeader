@class UIImageView, UIView;

@interface MMGrowDictationIconView : MMDictationLogicIcon

@property (retain, nonatomic) UIView *textMaskView;
@property (retain, nonatomic) UIImageView *maskImageView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 customIconImage:(id)a1 cgiScene:(long long)a2 uiScene:(unsigned long long)a3 uiParentScene:(unsigned long long)a4;
- (void)layoutSubviews;
- (void)updateMask;
- (void).cxx_destruct;

@end
