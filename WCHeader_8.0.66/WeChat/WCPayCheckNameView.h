@class NSString, UITextField, UILabel, UIView, WCPayCss;

@interface WCPayCheckNameView : UIView

@property (retain) UIView *container;
@property (retain) UIView *inputContainer;
@property (retain) UILabel *tailLabel;
@property (retain) NSString *tail;
@property (retain) WCPayCss *css;
@property (retain) UITextField *textField;

- (void)updateInputTail:(id)a0;
- (void)layoutSubviews;
- (void)updateContainer;
- (void)updateInputContainer;
- (void)updateTextField;
- (void)updateInputTailLabel;
- (id)attributedString:(id)a0 kern:(double)a1 font:(id)a2;
- (void).cxx_destruct;

@end
