@class AWEUserAttributedLabelView, UILabel, DUXButton, AWEUserProtocolPopViewModel;

@interface AWEUserProtocolSheetView : UIView

@property (retain, nonatomic) AWEUserProtocolPopViewModel *model;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEUserAttributedLabelView *subtitleLabel;
@property (retain, nonatomic) DUXButton *agreeBtn;
@property (retain, nonatomic) UILabel *disagreeBtn;
@property (copy, nonatomic) id /* block */ callBack;

- (void)updateByModel:(id)a0;
- (void)trackClickWithAction:(id)a0;
- (void)agreeBtnClicked;
- (void)disagreeBtnClicked;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
