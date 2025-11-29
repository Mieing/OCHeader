@class NSString, UIImageView, UILabel, UIView;

@interface AWEIMMessageContentMaskView : UIView

@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *iconBackgroundImageView;
@property (retain, nonatomic) UIImageView *defaultPlayIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) NSString *viewLayoutHash;

- (void)p_setupView;
- (void)resetForReuse;
- (void)setIconBackgroundWithName:(id)a0;
- (void)updateWithIconWidthHeight:(double)a0 iconAndTitleSpacing:(double)a1 subtitle:(id)a2 checkDiff:(BOOL)a3;
- (void)showDefaultPlayIcon:(BOOL)a0;
- (void)setIconWithName:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitleText:(id)a0;
- (void)setContentImage:(id)a0;

@end
