@class UIImageView, UIView, UILabel, UIButton;

@interface AWEIMSubcriptionContentView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIButton *avatarButton;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIButton *nameButton;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *coverTitleLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIImageView *maskLayerView;
@property (nonatomic) BOOL hasBackgroundImg;
@property (copy, nonatomic) id /* block */ onCoverageTapBlock;

- (void)configWithMessage:(id)a0;
- (struct CGSize { double x0; double x1; })sizeWithText:(id)a0 font:(id)a1 maxWidth:(double)a2;
- (void)onCoverageTap;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
