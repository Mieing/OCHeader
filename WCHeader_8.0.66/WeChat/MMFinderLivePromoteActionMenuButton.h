@class UIButton;

@interface MMFinderLivePromoteActionMenuButton : MenuButton

@property (retain, nonatomic) UIButton *deleteButton;

+ (double)preferWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutDeleteButton;
- (void)addTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;
- (void)setTag:(long long)a0;
- (void).cxx_destruct;

@end
