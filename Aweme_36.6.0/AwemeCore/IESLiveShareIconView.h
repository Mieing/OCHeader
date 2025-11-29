@interface IESLiveShareIconView : UIView

@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) long long currentType;

+ (struct CGSize { double x0; double x1; })shareIconViewSize;

- (void)didClick;
- (id)titleWithType:(long long)a0;
- (id)iconImageWithType:(long long)a0;
- (BOOL)panelNewStyle;
- (BOOL)panelColorMode;
- (id)initWithType:(long long)a0 title:(id)a1 iconView:(id)a2 action:(id /* block */)a3;
- (void)setupSubviewsWithType:(long long)a0;
- (void)setupSubViewsWithTitle:(id)a0 iconView:(id)a1;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 action:(id /* block */)a1;

@end
