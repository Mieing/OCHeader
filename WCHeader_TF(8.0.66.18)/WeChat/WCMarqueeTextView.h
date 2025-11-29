@class UIFont, NSString, UIColor, UILabel;

@interface WCMarqueeTextView : UIView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) NSString *textContent;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) double flowSpeed;
@property (nonatomic) double flowDuration;
@property (nonatomic) double gradientWidth;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)startPlaying;
- (void)stopPlaying;
- (void)reset;
- (void)resizeView;
- (void)initView;
- (void).cxx_destruct;

@end
