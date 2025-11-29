@class NSString, UITextField;

@interface AWESearchMerchandiseFilterIntervalInputComponent : AWESearchMerchandiseFilterBaseComponent <UITextFieldDelegate>

@property (retain, nonatomic) UITextField *minTextField;
@property (retain, nonatomic) UITextField *maxTextField;
@property (copy, nonatomic) id /* block */ clickTrackBlock;
@property (nonatomic, setter=setNewUIStyle:) BOOL isNewUIStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generateTextFieldWithPlaceholder:(id)a0;
- (void)hideKeyboard;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)setIsSelected:(BOOL)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)updateState;
- (void)textFieldDidEndEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)isEditing;
- (void)setupUI;

@end
