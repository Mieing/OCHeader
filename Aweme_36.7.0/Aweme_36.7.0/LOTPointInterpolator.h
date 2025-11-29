@protocol LOTPointValueDelegate;

@interface LOTPointInterpolator : LOTValueInterpolator

@property (weak, nonatomic) id<LOTPointValueDelegate> delegate;

- (void)setValueDelegate:(id)a0;
- (struct CGPoint { double x0; double x1; })pointValueForFrame:(id)a0;
- (BOOL)hasDelegateOverride;
- (void).cxx_destruct;

@end
