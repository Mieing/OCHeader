@class NSString, UIImageView, UITextField, UIView;
@protocol LSIMMemberSearchBarDelegate;

@interface LSIMMemberSearchBar : UIView <UITextFieldDelegate>

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIView *separatorView;
@property (weak, nonatomic) id<LSIMMemberSearchBarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initView;
- (BOOL)isFullScreen;
- (void).cxx_destruct;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (id)initWithStyle:(unsigned long long)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidChangeSelection:(id)a0;

@end
