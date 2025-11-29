@class UILabel, UIImageView, UIView;

@interface AWEECOMIMFootDescFoldButton : DUXBaseButton

@property (retain, nonatomic) UIView *redPoint;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *rightArrow;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
