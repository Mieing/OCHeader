@class NSArray;

@interface IESLiveGameDisplayOrientationSegmentedControl : UIControl

@property (copy, nonatomic) NSArray *labels;
@property (retain, nonatomic) NSArray *displayOrientationItems;
@property (nonatomic) unsigned long long initialIndex;
@property (nonatomic) unsigned long long selectedIndex;
@property (copy, nonatomic) id /* block */ itemSelectedHandler;

- (void)updateSelectedIndex:(long long)a0;
- (id)createItemLabelWithSelected:(BOOL)a0;
- (long long)findLabelIndexAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 displayOrientationItems:(id)a1 initialIndex:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)setupViews;

@end
