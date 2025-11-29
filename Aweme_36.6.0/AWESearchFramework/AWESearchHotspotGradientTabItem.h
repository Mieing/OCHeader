@class UILabel, UIColor, UIView;

@interface AWESearchHotspotGradientTabItem : UIControl

@property (retain, nonatomic) UILabel *itemLabel;
@property (retain, nonatomic) UIView *selectionMark;
@property (retain, nonatomic) UIColor *gradientColor;
@property (nonatomic) long long tabType;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (nonatomic) BOOL grayMode;
@property (nonatomic) BOOL isAverageTile;

- (void)handleClick;
- (void)p_updateItemColor;
- (id)p_gradientFont;
- (void)p_getGradientTextColor:(id)a0 withCompletion:(id /* block */)a1;
- (id)p_normalFont;
- (void)prePareForReuse;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setItemTitle:(id)a0;

@end
