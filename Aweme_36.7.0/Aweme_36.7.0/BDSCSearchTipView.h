@class UILabel, BDSCImageView;

@interface BDSCSearchTipView : UIView

@property (retain, nonatomic) BDSCImageView *imageView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) long long viewType;
@property (nonatomic) long long viewStyle;
@property (nonatomic) BOOL newAbnormalStyle;

- (void)updateViewStyle:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewType:(long long)a1 viewStyle:(long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewType:(long long)a1 viewStyle:(long long)a2 newAbnormalStyle:(BOOL)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)imageName;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
