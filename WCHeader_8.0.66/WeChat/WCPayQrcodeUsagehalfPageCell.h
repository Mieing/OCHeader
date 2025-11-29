@class MMUILabel, NSString, UITextField, MMImageView, UIView, UIButton;
@protocol WCPayQrcodeUsagehalfPageCellDelegate;

@interface WCPayQrcodeUsagehalfPageCell : MMTableViewCell <UITextFieldDelegate>

@property (retain, nonatomic) MMImageView *checkBox;
@property (retain, nonatomic) UIButton *container;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL showInputField;
@property (retain, nonatomic) MMUILabel *itemLabel;
@property (retain, nonatomic) UIView *topSeperatorView;
@property (retain, nonatomic) UIView *bottomSeperatorView;
@property (retain, nonatomic) UITextField *inputTextField;
@property (weak, nonatomic) id<WCPayQrcodeUsagehalfPageCellDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awakeFromNib;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithSelected:(BOOL)a0 showInputField:(BOOL)a1;
- (void)layoutSubviews;
- (void)addBottomSeperator;
- (id)textFieldContent;
- (void)textDidChange:(id)a0;
- (void)onTapCell;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;

@end
