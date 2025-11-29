@class UILabel;

@interface AWEIMEmoticonManagerDeleteView : UIView

@property (retain, nonatomic) UILabel *title;

- (void)popUp;
- (void)refreshWithSelectedCount:(long long)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setTag:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
