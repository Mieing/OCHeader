@class NSString, UITextField, UILabel, UIButton;

@interface IESLiveUploadGameNameView : IESLiveOptCategoryPanelView

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UITextField *nameTextField;
@property (retain, nonatomic) UIButton *confirmButton;
@property (readonly, nonatomic) BOOL isInputing;
@property (copy, nonatomic) id /* block */ confirmBlock;

- (void)confirmButtonAction:(id)a0 event:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 categoryTitle:(id)a1;
- (void)resignInputingResponder;
- (void)textFieldEditChangedAction:(id)a0 event:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)setupUI;

@end
