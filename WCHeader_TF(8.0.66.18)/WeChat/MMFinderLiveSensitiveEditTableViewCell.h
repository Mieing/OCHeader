@class NSString, FinderLiveSensitiveTextField;

@interface MMFinderLiveSensitiveEditTableViewCell : UITableViewCell <UITextFieldDelegate>

@property (retain, nonatomic) FinderLiveSensitiveTextField *textField;
@property (copy, nonatomic) id /* block */ onSensitiveWordAddCallback;
@property (nonatomic) BOOL ignoreResignFirstResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;
+ (double)preferHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutTextField;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)onTextFieldChanged:(id)a0;
- (void)handleForInputTextChanged:(id)a0;
- (void)addSensitiveWord:(id)a0;
- (unsigned int)getSensitiveWordMaxNum;
- (void)resignInput;
- (void)setIgnoreResignFirstResponder:(BOOL)a0;
- (BOOL)ignoreResignFirstResponder;
- (void).cxx_destruct;

@end
