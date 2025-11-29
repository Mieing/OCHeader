@class NSDictionary, NSMutableDictionary, UIView;
@protocol AWESearchFeelGoodElementView;

@interface AWESearchFeelGoodEntranceView : UIView

@property (retain, nonatomic) NSDictionary *type2ViewClassMap;
@property (retain, nonatomic) NSMutableDictionary *type2ViewCache;
@property (retain, nonatomic) UIView<AWESearchFeelGoodElementView> *elementView;

- (void)dismissEntrance;
- (void)dismissPopups;
- (id)elementViewWithEntranceType:(unsigned long long)a0;
- (void)showEntrnceViewWithConfig:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
