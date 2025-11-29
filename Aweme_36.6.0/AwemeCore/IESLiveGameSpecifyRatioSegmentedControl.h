@class NSArray;

@interface IESLiveGameSpecifyRatioSegmentedControl : UIControl

@property (copy, nonatomic) NSArray *labels;
@property (retain, nonatomic) NSArray *specifyRatioSegmentedItems;
@property (nonatomic) long long initialIndex;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) BOOL selectEnable;
@property (copy, nonatomic) id /* block */ enableSelectHandler;
@property (copy, nonatomic) id /* block */ itemSelectedHandler;

- (void)updateSelectedIndex:(long long)a0;
- (long long)findLabelIndexAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)createItemLabelWithSelected:(BOOL)a0 item:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 specifyRatioSegmentedItems:(id)a1 selectEnable:(BOOL)a2 initialIndex:(long long)a3;
- (void)updateSpecifyRatioSegmentedItems:(id)a0 selectEnable:(BOOL)a1 selectedIndex:(long long)a2;
- (void).cxx_destruct;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)setupViews;

@end
