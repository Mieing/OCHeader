@class UILabel, NSString, UIView;

@interface IESECLiveListToastView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *toastLabel;
@property (retain, nonatomic) NSString *nextToast;
@property (nonatomic) BOOL isShowing;

- (void)p_resetUI;
- (void)showToastViewWithContent:(id)a0;
- (void)resetShadowPath;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
