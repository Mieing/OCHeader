@class UIView;
@protocol IESIMLoadingViewProtocol;

@interface AWEIMAutoDismissLoadingView : UIView

@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (nonatomic) BOOL touchToDismiss;
@property (copy, nonatomic) id /* block */ autoDismissCallback;

+ (id)showOnWindow;

- (void)p_autoDismiss;
- (void)manualDismissWithoutCallback;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
