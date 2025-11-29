@class NSString;

@interface AWELivePreCardScrollLine : UIView <CAAnimationDelegate>

@property (nonatomic) long long count;
@property (nonatomic) long long maxNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshWith:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 numCount:(long long)a1 maxNumber:(long long)a2;
- (void)reloadLabel;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)setupUI;

@end
