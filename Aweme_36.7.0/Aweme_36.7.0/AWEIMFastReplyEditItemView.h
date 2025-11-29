@class UILabel, UITextField, AWEAnimatedButton;

@interface AWEIMFastReplyEditItemView : UIView

@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) AWEAnimatedButton *cancelButton;
@property (retain, nonatomic) UILabel *tipsView;
@property (copy, nonatomic) id /* block */ removeActionBlock;

- (void)configWithModel:(id)a0;
- (void)handleTextFieldEditingChangedEvent:(id)a0;
- (void).cxx_destruct;
- (void)didEndEditing;
- (void)prepareForReuse;
- (id)init;
- (void)cancelButtonPressed:(id)a0;
- (void)setupSubviews;

@end
