@protocol LOTNumberValueDelegate;

@interface LOTNumberInterpolator : LOTValueInterpolator

@property (weak, nonatomic) id<LOTNumberValueDelegate> delegate;

- (void)setValueDelegate:(id)a0;
- (double)floatValueForFrame:(id)a0;
- (BOOL)hasDelegateOverride;
- (void).cxx_destruct;

@end
