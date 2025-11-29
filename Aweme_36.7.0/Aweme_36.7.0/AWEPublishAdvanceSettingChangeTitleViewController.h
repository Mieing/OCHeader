@class AWEPublishPaymentPreviewItem, NSString, UITextField, UILabel, UIButton;

@interface AWEPublishAdvanceSettingChangeTitleViewController : UIViewController <UITextFieldDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *finishButton;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) AWEPublishPaymentPreviewItem *item;
@property (copy, nonatomic) id /* block */ updateItemBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateStateWithText:(id)a0;
- (void)finishButtonTapped;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)textFieldDidChange:(id)a0;
- (void)clearButtonTapped;

@end
