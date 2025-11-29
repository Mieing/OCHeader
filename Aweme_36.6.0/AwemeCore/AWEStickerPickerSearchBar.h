@class UIView, NSAttributedString, NSString, UIImageView, UIButton, UITextField, UILabel, UIColor;
@protocol AWEStickerPickerUIConfigurationProtocol, AWEStickerPickerSearchBarDelegate;

@interface AWEStickerPickerSearchBar : UIView <UITextFieldDelegate>

@property (retain, nonatomic) id<AWEStickerPickerUIConfigurationProtocol> UIConfig;
@property (retain, nonatomic) UIImageView *lensImageView;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) UILabel *tagLabel;
@property (nonatomic) BOOL isCancelButtonHidden;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) id<AWEStickerPickerSearchBarDelegate> delegate;
@property (copy, nonatomic) NSString *placeHolder;
@property (copy, nonatomic) NSAttributedString *attributedPlaceHolder;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *searchTintColor;
@property (copy, nonatomic) NSString *rightButtonTitle;
@property (copy, nonatomic) id /* block */ rightButtonClickedBlock;
@property (copy, nonatomic) id /* block */ clearButtonClickedBlock;
@property (copy, nonatomic) id /* block */ didTapTextFieldBlock;
@property (copy, nonatomic) id /* block */ searchButtonClickedBlock;
@property (nonatomic) BOOL shouldShowRightButton;
@property (nonatomic) BOOL isHiddenRightButton;
@property (nonatomic) BOOL isTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearButtonClicked:(id)a0;
- (void)addSubviews;
- (void)lensImageClicked;
- (void)rightButtonClicked:(id)a0;
- (void)searchButtonClicked:(id)a0;
- (void)updateUIConfig:(id)a0;
- (BOOL)supportSearchSuggestWords;
- (void)showClearButtonWithText:(id)a0;
- (void)refreshSearchButtonStatus;
- (void).cxx_destruct;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (void)updateConstraints;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)textFieldDidChange:(id)a0;
- (void)clearSearchBar;

@end
