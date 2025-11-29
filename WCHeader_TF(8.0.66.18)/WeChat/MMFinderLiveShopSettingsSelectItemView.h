@class UIImageView;

@interface MMFinderLiveShopSettingsSelectItemView : MMFinderLiveShopSettingItemView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *leftIconView;
@property (copy, nonatomic) id /* block */ onSelected;

+ (struct CGSize { double x0; double x1; })leftIconDefaultSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onTapped;
- (void)layoutSubviews;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
