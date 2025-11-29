@class UILabel, UIButton, NSAttributedString;

@interface IESLivePinOperateView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (copy, nonatomic) NSAttributedString *attrText;
@property (nonatomic) BOOL btnAvailable;
@property (copy, nonatomic) id /* block */ cancelDidClick;

- (void)cancelBtnClick:(id)a0;
- (id)initWithAttributedText:(id)a0 btnAvailable:(BOOL)a1;
- (void).cxx_destruct;
- (void)setupViews;

@end
