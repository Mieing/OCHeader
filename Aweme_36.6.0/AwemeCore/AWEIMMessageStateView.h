@class UIImage;

@interface AWEIMMessageStateView : UIImageView

@property (nonatomic) long long state;
@property (retain, nonatomic) UIImage *refreshImg;
@property (nonatomic) long long type;
@property (nonatomic) double spinDuration;

- (void)configWithState:(long long)a0;
- (void)p_startAnimating;
- (void)p_stopAnimating;
- (BOOL)shouldCheckAWEIMMessageState:(long long)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
