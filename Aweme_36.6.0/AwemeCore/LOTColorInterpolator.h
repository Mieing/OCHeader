@protocol LOTColorValueDelegate;

@interface LOTColorInterpolator : LOTValueInterpolator

@property (weak, nonatomic) id<LOTColorValueDelegate> delegate;

- (void)setValueDelegate:(id)a0;
- (struct CGColor { } *)colorForFrame:(id)a0;
- (BOOL)hasDelegateOverride;
- (void).cxx_destruct;

@end
