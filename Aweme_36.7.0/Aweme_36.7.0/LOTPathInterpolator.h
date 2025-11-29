@protocol LOTPathValueDelegate;

@interface LOTPathInterpolator : LOTValueInterpolator

@property (weak, nonatomic) id<LOTPathValueDelegate> delegate;

- (void)setValueDelegate:(id)a0;
- (id)pathForFrame:(id)a0 cacheLengths:(BOOL)a1;
- (BOOL)hasDelegateOverride;
- (void).cxx_destruct;

@end
