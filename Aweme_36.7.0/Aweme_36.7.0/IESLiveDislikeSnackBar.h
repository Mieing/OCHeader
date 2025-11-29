@class NSTimer, NSString, NSDictionary;

@interface IESLiveDislikeSnackBar : UIView

@property (retain, nonatomic) NSTimer *autoHideTimer;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) BOOL isShowing;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSDictionary *trackParams;

- (void)showOnView:(id)a0 bottomOffset:(double)a1;
- (void)startAutoHideIfNeeded;
- (void)setHideAnimation;
- (id)initWithTarget:(id)a0 sel:(SEL)a1;
- (void)prepareSubview;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)dismiss:(BOOL)a0;

@end
