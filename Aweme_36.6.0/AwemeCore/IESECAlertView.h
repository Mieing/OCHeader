@class IESECPopupView, IESECAlertUIConfig, NSString, UIScrollView, NSMutableArray, UIView;

@interface IESECAlertView : UIView <IESECPopupViewProtocol>

@property (retain, nonatomic) UIView *customView;
@property (nonatomic) double maxCustomContentHeight;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) NSMutableArray *actionButtons;
@property (weak, nonatomic) IESECPopupView *popup;
@property (retain, nonatomic) IESECAlertUIConfig *alertUIConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showAlertWithTitle:(id)a0 description:(id)a1 actionButtonTitle:(id)a2 cancelButtonTitle:(id)a3 actionBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
+ (id)showAlertWithTitle:(id)a0 content:(id)a1 actionButtonTitle:(id)a2 cancelButtonTitle:(id)a3 actionBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
+ (id)alertWithTitle:(id)a0 content:(id)a1 actionButtonTitle:(id)a2 cancelButtonTitle:(id)a3 actionBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
+ (id)alertWithTitle:(id)a0 customView:(id)a1 actionButtonTitle:(id)a2 cancelButtonTitle:(id)a3 actionBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
+ (id)alertWithTitle:(id)a0 description:(id)a1 actionButtonTitle:(id)a2 cancelButtonTitle:(id)a3 actionBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
+ (id)alertWithTitle:(id)a0 description:(id)a1 image:(id)a2 actionButtonTitle:(id)a3 cancelButtonTitle:(id)a4 actionBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6 uiConfig:(id)a7;
+ (id)alertWithTitle:(id)a0 description:(id)a1 headerImage:(id)a2 actionButtonTitle:(id)a3 cancelButtonTitle:(id)a4 actionBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;
+ (id)showAlertWithTitle:(id)a0 description:(id)a1 image:(id)a2 actionButtonTitle:(id)a3 cancelButtonTitle:(id)a4 actionBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6 uiConfig:(id)a7;

- (void)layoutSubviews;
- (id)initWithCustomView:(id)a0 maxCustomViewHeight:(double)a1;
- (void)addActionButtonWithConfig:(id /* block */)a0 clicked:(id /* block */)a1;
- (id)initWithCustomView:(id)a0 uiconfig:(id)a1;
- (id)lineWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dismissWhenCompleted:(id /* block */)a0;
- (void)resetCustomWithConfig:(id /* block */)a0;
- (void)clearActionButtons;
- (void)dismiss;
- (void).cxx_destruct;
- (void)_setup;
- (void)showInView:(id)a0;

@end
