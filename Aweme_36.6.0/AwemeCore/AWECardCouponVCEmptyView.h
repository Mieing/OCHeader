@class AWERxProperty, AWERxObservable;

@interface AWECardCouponVCEmptyView : UIView

@property (retain, nonatomic) AWERxProperty *showEmptyView;
@property (retain, nonatomic) AWERxObservable *invalidEntryClicked;

- (void)invalidEntryClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(unsigned long long)a1;

@end
