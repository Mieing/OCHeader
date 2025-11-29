@class UIImageView, NSString, MJTextLabel;

@interface MJCaptionLabel : UIView

@property (retain, nonatomic) MJTextLabel *label;
@property (retain, nonatomic) MJTextLabel *subLabel;
@property (retain, nonatomic) UIImageView *indicatorView;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *subText;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addRecognizingAnimation;
- (void)layoutWithMaxWidth:(double)a0;
- (void)showIndicatorViewAnimated:(BOOL)a0;
- (void)hideIndicatorViewAnimated:(BOOL)a0;
- (void).cxx_destruct;

@end
