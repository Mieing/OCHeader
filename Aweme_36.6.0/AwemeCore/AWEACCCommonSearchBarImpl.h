@class UIColor, NSString, UITextField, AWECommonSearchBar, UIImage, NSAttributedString;
@protocol ACCCommonSearchBarDelegate;

@interface AWEACCCommonSearchBarImpl : NSObject <AWECommonSearchBarDelegate, ACCCommonSearchBarProtocol>

@property (retain, nonatomic) AWECommonSearchBar *searchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) UITextField *textField;
@property (nonatomic) BOOL shouldShowRightButton;
@property (weak, nonatomic) id<ACCCommonSearchBarDelegate> delegate;
@property (copy, nonatomic) NSString *placeHolder;
@property (copy, nonatomic) NSAttributedString *attributedPlaceHolder;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *searchTintColor;
@property (retain, nonatomic) UIColor *searchFiledBackgroundColor;
@property (retain, nonatomic) UIImage *clearImage;
@property (retain, nonatomic) UIColor *lensImageTintColor;
@property (retain, nonatomic) UIImage *lensImage;
@property (copy, nonatomic) NSString *rightButtonTitle;
@property (copy, nonatomic) id /* block */ rightButtonClickedBlock;

- (void)animatedShowCancelButton:(BOOL)a0;
- (id)accSearchBar;
- (void).cxx_destruct;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)textFieldDidChange:(id)a0;

@end
