@class UIView, NSString, AWECommonSearchBar, NSAttributedString, UIImage, UIFont, UITextField, UIColor;

@interface AWEStudioCommonSearchBar : NSObject <ACCMusicCommonSearchBarProtocol, AWECommonSearchBarDelegate>

@property (retain, nonatomic) AWECommonSearchBar *searchBar;
@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) UITextField *textField;
@property (readonly, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedPlaceHolder;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *searchFiledBackgroundColor;
@property (retain, nonatomic) UIColor *searchTintColor;
@property (retain, nonatomic) UIImage *clearImage;
@property (retain, nonatomic) UIImage *lensImage;
@property (retain, nonatomic) UIFont *rightButtonTitleFont;
@property (retain, nonatomic) UIColor *splitLineColor;
@property (copy, nonatomic) id /* block */ rightButtonClickedBlock;
@property (copy, nonatomic) id /* block */ searchButtonClickedBlock;
@property (copy, nonatomic) id /* block */ searchBarTextChangeBlock;
@property (copy, nonatomic) id /* block */ textFieldBeginEditingBlock;
@property (copy, nonatomic) id /* block */ textFieldDidEndEditingBlock;
@property (copy, nonatomic) id /* block */ textFieldShouldReturnBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animatedShowCancelButton:(BOOL)a0;
- (void)hideSearchButton:(BOOL)a0;
- (void)hideRightContent:(BOOL)a0;
- (void)textFieldBecomeFirstResponder;
- (id)targetSearchBar;
- (void).cxx_destruct;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)init;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)clearSearchBar;

@end
