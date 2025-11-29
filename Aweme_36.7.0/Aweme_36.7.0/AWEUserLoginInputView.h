@class AWEUserLoginInputModel, DYLoginInputView;

@interface AWEUserLoginInputView : UIView

@property (retain, nonatomic) AWEUserLoginInputModel *model;
@property (retain, nonatomic) DYLoginInputView *inputView;
@property (copy, nonatomic) id /* block */ didInputChange;

- (void)updateInputContent:(id)a0;
- (void)updateOnlySupportNumber:(BOOL)a0;
- (void)clearInput;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)setupUI;

@end
