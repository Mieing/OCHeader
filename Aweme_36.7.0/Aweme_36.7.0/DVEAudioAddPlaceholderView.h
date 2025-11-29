@class UIImageView, UILabel, UIView;

@interface DVEAudioAddPlaceholderView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) double contentCornerRadius;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)setAccessibilities;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })placeHolderFrame;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
