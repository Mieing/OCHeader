@class NSMutableArray;

@interface WCFinderObseverViewHiddenView : UIView

@property (retain, nonatomic) NSMutableArray *observedViews;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (BOOL)ignoreView:(id)a0;
- (void)addSubview:(id)a0;
- (void)willRemoveSubview:(id)a0;
- (void *)observerKey;
- (void)onSubviewHiddenChanged:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
