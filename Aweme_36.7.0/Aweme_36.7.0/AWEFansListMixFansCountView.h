@class UILabel;

@interface AWEFansListMixFansCountView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *countLabel;

- (id)createCountStringWithNum:(long long)a0;
- (id)number:(double)a0 unit:(id)a1;
- (void)bindTittle:(id)a0 count:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
