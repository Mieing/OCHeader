@class WCPayWebImageView, NSString, UITextField, UILabel, UIView;
@protocol HoneyPayPrepareCardViewDelegate;

@interface HoneyPayPrepareCardView : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *unitLabel;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) WCPayWebImageView *icon;
@property (weak, nonatomic) id<HoneyPayPrepareCardViewDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *cardAmount;
@property (copy, nonatomic) NSString *iconUrl;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)textFieldDidChange:(id)a0;
- (void).cxx_destruct;

@end
