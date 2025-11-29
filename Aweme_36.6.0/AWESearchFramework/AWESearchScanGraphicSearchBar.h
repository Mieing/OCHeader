@class UIView, NSString, AWESearchScanGraphicSearchBarConfig, AWESearchScanGraphicTextField, UIImageView, UIButton, UITextField, DUXPopover;

@interface AWESearchScanGraphicSearchBar : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UIButton *xMark;
@property (retain, nonatomic) UIImageView *thumbnail;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) UIView *textFieldBoxView;
@property (retain, nonatomic) UIButton *clearTextButton;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) DUXPopover *popover;
@property (retain, nonatomic) AWESearchScanGraphicSearchBarConfig *config;
@property (nonatomic) BOOL pureText;
@property (retain, nonatomic) UITextField *textFieldView;
@property (retain, nonatomic) AWESearchScanGraphicTextField *textField;
@property (nonatomic) BOOL thumbnailWillDelete;
@property (copy, nonatomic) id /* block */ willClearGraphicBlock;
@property (copy, nonatomic) id /* block */ didClickXMarkBlock;
@property (copy, nonatomic) id /* block */ didClickClearButtonBlock;
@property (copy, nonatomic) id /* block */ didClickBackButtonBlock;
@property (copy, nonatomic) id /* block */ didClickSearchButtonBlock;
@property (copy, nonatomic) id /* block */ didClickKeyboardSearchBlock;
@property (copy, nonatomic) id /* block */ textFieldWillBecomeEmptyBlock;
@property (copy, nonatomic) id /* block */ textFieldWillBecomeNotEmptyBlock;
@property (copy, nonatomic) id /* block */ textFieldDidBeginEditingBlock;
@property (copy, nonatomic) id /* block */ searchBarDidChangeBlock;
@property (copy, nonatomic) id /* block */ searchBarDidSwitchToPureTextBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickClearButton;
- (void)clickBackButton;
- (void)setupConfig:(id)a0;
- (BOOL)isPureText;
- (void)clickSearchButton;
- (void)setupBackButton;
- (void)setupSubViews;
- (void)clickXMark:(id)a0;
- (void)popoverShow;
- (void)setupTextFieldBlock;
- (BOOL)checkIsEmptySearch;
- (void)updateSuggestPlaceholder:(id)a0;
- (void)popoverDismiss;
- (void)switchToPureText:(BOOL)a0;
- (void)clearGraphicType:(unsigned long long)a0;
- (void)setupPopover;
- (void)setupTextFieldBoxView;
- (void)setupThumbnail;
- (void)setupClearButton;
- (void)setupSearchButton;
- (void)createGradientBackground;
- (void)setupTextFieldView;
- (void)setupClearTextButton;
- (void)clickClearTextButton;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (id)initWithConfig:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)colorNamed:(id)a0;
- (void)setupSearchBar;
- (void)setupTextField;
- (void)showSearchBar;

@end
