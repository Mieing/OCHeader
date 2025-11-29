@class UIColor, NSString, UITextField, UILabel, UIView;
@protocol WCPayInputMoneyViewDelegate;

@interface WCPayInputMoneyView : UIView

@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *unitLabel;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIView *separator;
@property (weak, nonatomic) id<WCPayInputMoneyViewDelegate> delegate;
@property (copy, nonatomic) NSString *titleText;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *unitText;
@property (retain, nonatomic) UIColor *unitColor;
@property (retain, nonatomic) UIColor *separatorColor;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;
- (void)textFieldDidChange:(id)a0;
- (void)updateTintColor:(id)a0;
- (void).cxx_destruct;

@end
