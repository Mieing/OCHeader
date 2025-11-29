@protocol LOTSizeValueDelegate;

@interface LOTSizeInterpolator : LOTValueInterpolator

@property (weak, nonatomic) id<LOTSizeValueDelegate> delegate;

- (void)setValueDelegate:(id)a0;
- (struct CGSize { double x0; double x1; })sizeValueForFrame:(id)a0;
- (BOOL)hasDelegateOverride;
- (void).cxx_destruct;

@end
