@class UILabel, UIImageView;

@interface AWELandScapeBottomButton : UIButton

@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIImageView *image;

- (void)updateImage:(id)a0;
- (void)setUI;
- (void)playResumeAnimation;
- (void)updateCountLabel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)currentScale;
- (void)playAnimation;

@end
