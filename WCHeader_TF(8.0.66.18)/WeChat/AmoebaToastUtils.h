@class NSTimer, UIView;

@interface AmoebaToastUtils : NSObject

@property (retain, nonatomic) UIView *toastView;
@property (retain, nonatomic) NSTimer *toastTimer;
@property (retain, nonatomic) NSTimer *dismissTimer;
@property (copy, nonatomic) id /* block */ finishHandler;

+ (id)toast;

- (void)showToast:(id)a0;
- (void)showToast:(id)a0 duration:(double)a1;
- (void)showToast:(id)a0 duration:(double)a1 gravity:(long long)a2;
- (void)showToast:(id)a0 duration:(double)a1 gravity:(long long)a2 finishHandler:(id /* block */)a3;
- (void)toastShow:(id)a0 duration:(double)a1 gravity:(long long)a2 finishHandler:(id /* block */)a3;
- (void)initToastView:(id)a0 gravity:(long long)a1;
- (void)finishDismiss;
- (void)dismiss;
- (void)removeToast;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })getToastSizeWithMessage:(id)a0;
- (void).cxx_destruct;

@end
