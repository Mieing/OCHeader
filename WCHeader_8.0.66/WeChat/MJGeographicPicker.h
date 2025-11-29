@class NSString, UIImageView, UILabel, UIView;

@interface MJGeographicPicker : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *icon;
@property (copy, nonatomic) id /* block */ didSelectUpdateHandler;
@property (retain, nonatomic) NSString *title;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupViews;
- (void).cxx_destruct;

@end
