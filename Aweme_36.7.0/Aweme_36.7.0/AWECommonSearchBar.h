@class UIView, NSAttributedString, NSString, UIImage, UIFont, UIImageView, UIButton, UITextField, UILabel, UIColor;
@protocol AWECommonSearchBarDelegate;

@interface AWECommonSearchBar : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UIImageView *lensImageView;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) UIView *splitLine;
@property (nonatomic) BOOL isRightButtonHidden;
@property (retain, nonatomic) UILabel *tagLabel;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL shouldShowRightButton;
@property (weak, nonatomic) id<AWECommonSearchBarDelegate> delegate;
@property (copy, nonatomic) NSString *placeHolder;
@property (copy, nonatomic) NSAttributedString *attributedPlaceHolder;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *tagText;
@property (retain, nonatomic) UIColor *tagTextColor;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *searchTintColor;
@property (retain, nonatomic) UIColor *searchFiledBackgroundColor;
@property (retain, nonatomic) UIImage *clearImage;
@property (retain, nonatomic) UIColor *lensImageTintColor;
@property (retain, nonatomic) UIImage *lensImage;
@property (nonatomic) struct CGSize { double width; double height; } lensImageSize;
@property (copy, nonatomic) NSString *rightButtonTitle;
@property (retain, nonatomic) UIFont *rightButtonTitleFont;
@property (copy, nonatomic) id /* block */ rightButtonClickedBlock;
@property (copy, nonatomic) id /* block */ searchButtonClickedBlock;
@property (nonatomic) BOOL isHiddenRightButton;
@property (retain, nonatomic) UIColor *splitLineColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearButtonClicked:(id)a0;
- (void)addSubviews;
- (void)lensImageClicked;
- (void)rightButtonClicked:(id)a0;
- (void)searchButtonClicked:(id)a0;
- (void)animatedShowCancelButton:(BOOL)a0;
- (void)hideSearchButton:(BOOL)a0;
- (void)hideRightContent:(BOOL)a0;
- (void)updateClearButtonHiddenStatus:(BOOL)a0;
- (void)updateLensImageAndTextFieldSpacing:(double)a0;
- (void).cxx_destruct;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (BOOL)resignFirstResponder;
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
