@class UITextField;
@protocol AWEAccountDeleteButtonDelegate;

@interface AWEAccountDeleteButton : UIButton

@property (weak, nonatomic) UITextField *textField;
@property (weak, nonatomic) id<AWEAccountDeleteButtonDelegate> delegate;

+ (id)buttonWithType:(long long)a0 textField:(id)a1;

- (id)initWithTextFiled:(id)a0;
- (void)setNeedsUpdate;
- (void).cxx_destruct;
- (void)_update;
- (void)deleteAction;
- (void)setup;
- (void)updateAction:(id)a0;

@end
