@class UITextView, IESIMShareSelectedAvatarListView, UIImageView, NSString, UIView, UILabel, UIButton;

@interface IESIMShareSearchBar : UIView <UITextViewDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UITextView *searchTextView;
@property (retain, nonatomic) UILabel *placeholderLabel;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) IESIMShareSelectedAvatarListView *avatarListView;
@property (retain, nonatomic) UIImageView *searchIcon;
@property (nonatomic) BOOL isEndEdit;
@property (copy, nonatomic) id /* block */ textChangeHandler;
@property (copy, nonatomic) id /* block */ didTapBackSpaceWhlileEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)searchBarHeight;

- (void)updateSelectShareModel:(id)a0 isNew:(BOOL)a1 deleteNeedScrollToLast:(BOOL)a2;
- (void)addSelectShareModels:(id)a0;
- (void)searchBarClearText;
- (void)searchBarEndEdit;
- (void)p_setupObserver;
- (void)p_setupConstraint;
- (void)p_didTapCancelButton;
- (void)p_didTapClearButton;
- (void)p_textViewDidChange:(id)a0;
- (void)p_updateAvartarView;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)text;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isEditing;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)updateSearchText:(id)a0;
- (void)p_textDidChange:(id)a0;

@end
