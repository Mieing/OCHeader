@class NSTimer, UILabel, NSString;

@interface CMC3DBoxTextView : UIView <CAAnimationDelegate>

@property (nonatomic) long long value;
@property (nonatomic) long long scrollTimes;
@property (copy, nonatomic) id /* block */ didScrollBlock;
@property (retain, nonatomic) NSTimer *scrollTimer;
@property (retain, nonatomic) UILabel *upLabel;
@property (retain, nonatomic) UILabel *downLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createValueLabel;
- (void)animate3DScroll;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })downLabelTransform;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })upLabelTransform;
- (void)updateWithValue:(long long)a0 scrollTimes:(long long)a1;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)init;
- (void)reset;
- (void)dealloc;
- (void)updateText;
- (id)showText;

@end
