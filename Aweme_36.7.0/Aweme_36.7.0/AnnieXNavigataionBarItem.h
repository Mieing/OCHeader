@class UIButton, NSString, UIImage;

@interface AnnieXNavigataionBarItem : UIView

@property (copy, nonatomic) id /* block */ onClick;
@property (retain, nonatomic) UIButton *imageButton;
@property (copy, nonatomic) NSString *barItemName;
@property (readonly, copy, nonatomic) id /* block */ barItemAction;
@property (copy, nonatomic) id /* block */ customBarItemAction;
@property (retain, nonatomic) UIImage *barItemImage;
@property (copy, nonatomic) NSString *iconImagePath;

+ (id)itemWithIconName:(id)a0 titleColor:(id)a1 themeName:(id)a2 onClickBlock:(id /* block */)a3 barItemName:(id)a4;
+ (id)itemWithImage:(id)a0 onClickBlock:(id /* block */)a1 barItemName:(id)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 image:(id)a1 onClickBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
