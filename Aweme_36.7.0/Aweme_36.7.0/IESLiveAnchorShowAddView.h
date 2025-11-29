@class UIView, NSString, NSArray, UIButton, MASConstraint, UITextField, NSMutableArray, UILabel, UIScrollView;

@interface IESLiveAnchorShowAddView : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIButton *addButton;
@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) MASConstraint *containerBottom;
@property (retain, nonatomic) MASConstraint *scrollTop;
@property (retain, nonatomic) MASConstraint *scrollHeight;
@property (copy, nonatomic) NSArray *observers;
@property (retain, nonatomic) NSMutableArray *topics;
@property (nonatomic) BOOL willDismiss;
@property (copy, nonatomic) id /* block */ sureHandler;
@property (nonatomic) long long remainCount;
@property (nonatomic) long long maxLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_addNotifications;
- (void)p_handleTabGestureAction;
- (void)handleKeyboardStatusDidChangeWithHidden:(BOOL)a0 note:(id)a1;
- (double)getCellWidthWithItem:(id)a0;
- (void)p_textFieldTextDidChange:(id)a0;
- (void)p_sureButtonClicked;
- (void)p_addNewTopic;
- (void)p_refreshCells;
- (void)p_scrollToBottom;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)p_commonInit;

@end
