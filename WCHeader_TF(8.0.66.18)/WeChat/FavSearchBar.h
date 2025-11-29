@class MMUIButton, NSString, UITextField, UIImageView, UIScrollView, NSMutableArray, UILabel;
@protocol FavSearchBarDelegate;

@interface FavSearchBar : MMUIView <UITextFieldDelegate> {
    NSString *m_searchText;
    NSString *m_searchType;
    NSMutableArray *m_searchTags;
    UIScrollView *m_scrollView;
    UITextField *m_textField;
    UILabel *m_placeholderLabel;
    UIImageView *m_searchIcon;
    double m_maxHeight;
    double m_maxContentWidth;
    double m_rightMargin;
    NSMutableArray *m_arrButtons;
    MMUIButton *m_highlightButton;
    NSString *m_updateSearchingName;
}

@property (weak, nonatomic) id<FavSearchBarDelegate> delegate;
@property (nonatomic) BOOL shouldEdit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWidth:(double)a0 andRightMargin:(double)a1;
- (void)initView;
- (void)updateWithWidth:(double)a0;
- (void)updateFrameForTextField:(double)a0;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (void)updateFrameForTextField:(double)a0 scroll:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })getPositionForView:(id)a0 withWidth:(double)a1 behindButton:(id)a2;
- (void)layoutSubviews;
- (void)updateFrameForTextFieldScroll:(BOOL)a0;
- (void)updatePlaceHolder;
- (void)setType:(id)a0;
- (void)setHilightAnimationToButtonWith:(id)a0;
- (void)setTag:(id)a0 isSelected:(BOOL)a1;
- (void)updateTag:(id)a0 toNewTag:(id)a1;
- (void)cancelSearch;
- (void)clearSearchText;
- (void)updateButtons;
- (void)showHighlightAnimationTo:(id)a0;
- (void)addButton:(id)a0 buttonType:(unsigned long long)a1;
- (id)searchText;
- (id)searchTags;
- (id)searchType;
- (void)ontap;
- (void)buttonClicked:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)onTextFieldChanged:(id)a0;
- (void)deleteButtonAtIndex:(int)a0;
- (id)getTextFieldRealText;
- (void).cxx_destruct;

@end
