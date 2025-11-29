@class UIColor, NSString, UIImage, AWECustomSearchBar, AWESearchBarButton;

@interface AWESearchTopBarCustomBarElement : AWESearchTopBarBaseElement <UISearchBarDelegate>

@property (nonatomic) BOOL needMoveCursorToEnd;
@property (retain, nonatomic) UIImage *clearIconLightImage;
@property (retain, nonatomic) UIImage *clearIconDarkImage;
@property (retain, nonatomic) AWESearchBarButton *clearTextButton;
@property (copy, nonatomic) NSString *originalPlaceholder;
@property (copy, nonatomic) NSString *placeHolder;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) AWECustomSearchBar *searchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindAction;
- (BOOL)isCapsuleShown;
- (void)updatePlaceholderUI;
- (BOOL)p_enableSearchBarBigMode;
- (void)updateElementsLayoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configNewSearchTheme:(unsigned long long)a0 currentModernFeedUITheme:(unsigned long long)a1 uiThemeStyle:(long long)a2;
- (void)configNewSearchBarAreaWithTheme:(unsigned long long)a0;
- (void)moveCursorToEnd:(id)a0;
- (void)inputElementTap;
- (BOOL)p_enableShowScanButton;
- (BOOL)p_enableShowMagnifier;
- (void)customBarTextFieldDidBeginEditing:(id)a0;
- (void)customBarTextFieldDidEndEditing:(id)a0;
- (void)customBarTextFieldDidChangeSelection:(id)a0;
- (BOOL)customBartextFieldShouldClear:(id)a0;
- (void)clearTextButtonClicked;
- (void).cxx_destruct;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)setupUI;
- (void)textFieldDidChange:(id)a0;
- (void)hostViewDidLayoutSubviews;
- (void)setTextFont:(id)a0;
- (id)bgColor;
- (void)setBgColor:(id)a0;
- (id)initWithDelegate:(id)a0 context:(id)a1;

@end
