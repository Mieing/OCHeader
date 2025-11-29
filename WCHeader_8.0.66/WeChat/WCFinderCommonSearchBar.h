@class NSString, UIImageView, UITextField, UIButton;
@protocol WCFinderCommonSearchBarDelegate;

@interface WCFinderCommonSearchBar : MMUIView <UITextFieldDelegate>

@property (retain, nonatomic) UIImageView *searchImageView;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIButton *clearBtn;
@property (nonatomic) BOOL isEditing;
@property (weak, nonatomic) id<WCFinderCommonSearchBarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpView;
- (void)updateTextFieldPlaceholderText:(id)a0;
- (void)layoutAllSubviews;
- (void)onClickClearAction;
- (void)endTyping:(id)a0;
- (void)textFieldDidChange:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void).cxx_destruct;

@end
