@class UIColor, AWELineProgressView, NSString;

@interface AWEUGPendantCapsuleProgressView : UIView <AWEUGPendantProgressProtocol>

@property (retain, nonatomic) AWELineProgressView *progressView;
@property (nonatomic) unsigned long long progressType;
@property (readonly, nonatomic) unsigned long long status;
@property (retain, nonatomic) UIColor *progressColor;
@property (retain, nonatomic) UIColor *progressBackgroundColor;
@property (nonatomic) double progressWidth;
@property (nonatomic) double progressValue;
@property (copy, nonatomic) NSString *progressBGColorS;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *bgColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performUpdateFromState:(unsigned long long)a0 toState:(unsigned long long)a1 animated:(BOOL)a2;
- (void)updateProgress:(double)a0 animated:(BOOL)a1;
- (id)hexColorFromString:(id)a0;
- (void)updateProgressViewAnimated:(BOOL)a0;
- (void)setProgressColors:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateUI;
- (void)updateProgress:(double)a0;

@end
