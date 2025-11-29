@class YYLabel, UILabel, UIView, UIButton;

@interface IESGCPPropUsageAlertView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) YYLabel *descLabel;
@property (retain, nonatomic) UIButton *agreeButton;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } userProtocolRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } privateProtocolRange;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } userProtocolRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } privateProtocolRect;
@property (copy, nonatomic) id /* block */ agreeAction;
@property (copy, nonatomic) id /* block */ closeAction;
@property (copy, nonatomic) id /* block */ userProrocolAction;
@property (copy, nonatomic) id /* block */ privateProrocolAction;

+ (void)showWithAgreeAction:(id /* block */)a0 closeAction:(id /* block */)a1 userProrocolAction:(id /* block */)a2 privateProrocolAction:(id /* block */)a3 diContext:(id)a4;

- (void)dismissWithAnimation;
- (void)showAlertWithAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 diContext:(id)a1;
- (void)makeTrackerNode;
- (void)didTapAgreeButton;
- (void)dismiss;
- (void).cxx_destruct;
- (void)show;
- (void)setupViews;
- (void)didTapCloseButton;

@end
