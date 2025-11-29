@class AWEActivityStartupPopupModel, NSDictionary, UIImageView, AWEButton, UIView, UILabel, UIButton;

@interface AWEActivityStartupPopupView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AWEButton *actionButton;
@property (retain, nonatomic) UILabel *actionTitleLabel;
@property (retain, nonatomic) UILabel *descTitleLabel;
@property (retain, nonatomic) AWEActivityStartupPopupModel *popupModel;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) id /* block */ actionButtonBlock;
@property (copy, nonatomic) id /* block */ closeButtonBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;

+ (id)popupViewWithModel:(id)a0 logExtra:(id)a1;

- (void)configViews;
- (void)updateUIWithModel:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)show;

@end
