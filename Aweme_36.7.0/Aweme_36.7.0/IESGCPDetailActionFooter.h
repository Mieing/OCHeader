@class NSString, UIImageView, UILabel, UIView;

@interface IESGCPDetailActionFooter : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ action;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutView;
- (void)setupView;
- (void)tapAction:(id)a0;

@end
