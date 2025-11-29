@class UILabel, AWEPayNumberInputView;

@interface AWEPaySKMAmountInputContainer : UIView

@property (retain, nonatomic) AWEPayNumberInputView *inputView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *prefixFlag;
@property (retain, nonatomic) UILabel *flagView;
@property (copy, nonatomic) id /* block */ didClickConfirmBtn;
@property (copy, nonatomic) id /* block */ didChangeBlock;

- (id)getAmountUnitsStr:(id)a0;
- (void)setAmountStr:(id)a0;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)init;
- (void)setupUI;

@end
