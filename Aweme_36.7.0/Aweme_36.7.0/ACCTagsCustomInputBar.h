@class NSString, UIView, DUXBaseTextField, DUXBaseButton;
@protocol ACCTagsCustomInputBarDelegate;

@interface ACCTagsCustomInputBar : UIView <UITextFieldDelegate>

@property (retain, nonatomic) DUXBaseTextField *textField;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) DUXBaseButton *confirmButton;
@property (nonatomic) BOOL showsConfirmButton;
@property (nonatomic) double confirmButtonWidth;
@property (retain, nonatomic) NSString *content;
@property (weak, nonatomic) id<ACCTagsCustomInputBarDelegate> delegate;
@property (retain, nonatomic) NSString *placeHolderText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)confirmButtonTapped;
- (void)textFieldDidChanged:(id)a0;
- (void)updateInputBarContent:(id)a0;
- (id)initWithPlaceHolderText:(id)a0;
- (double)customInputBarHeight;
- (void)setShowsConfirmButton:(BOOL)a0 withAnimation:(BOOL)a1;
- (id)inputBarContent;
- (void)cutText;
- (void)clearText;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;

@end
