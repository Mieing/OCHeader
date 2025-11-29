@class UILabel, UIButton, NSString;

@interface AWEPayFaceLivenessAlertContentView : UIView <DUXAlertDialogBodyView>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *leftBtn;
@property (retain, nonatomic) UIButton *rightBtn;
@property (copy, nonatomic) NSString *titleStr;
@property (copy, nonatomic) NSString *leftBtnTitle;
@property (copy, nonatomic) NSString *rightBtnTitle;
@property (copy, nonatomic) id /* block */ leftBtnAction;
@property (copy, nonatomic) id /* block */ rightBtnAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)duxAlertDialog_view;
- (void)p_onLeftBtnClick;
- (void)p_onRightBtnClick;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
