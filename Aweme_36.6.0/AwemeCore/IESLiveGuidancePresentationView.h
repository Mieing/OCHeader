@class NSString, UIImageView, NSArray, UILabel, UIButton;

@interface IESLiveGuidancePresentationView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIButton *button;
@property (copy, nonatomic) NSString *guidanceTips;
@property (copy, nonatomic) NSArray *guidanceImages;

+ (double)defaultHeight;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
