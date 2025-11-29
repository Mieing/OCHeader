@interface AWESpeCategoryKit.EmptyTabBar : UIView <AWEListKitSegmentedControlProtocol>

@property (nonatomic, weak) void /* function */ contextDelegate;

- (void)awelistkit_protocol_defaultConfig;
- (void)awelistkit_protocol_updateIndicatorWithScrollProgress:(double)a0;
- (void)awelistkit_protocol_updateSelectedItemWithIndex:(long long)a0 animated:(BOOL)a1;
- (long long)awelistkit_protocol_segmentedControlSelectedIndex;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
