@class UIColor, NSString, UIFont, UIImage;

@interface BDPVideoWaterMarkView : UIView

@property (retain, nonatomic) UIImage *markImage;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;

- (void)generateMarkImage;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
