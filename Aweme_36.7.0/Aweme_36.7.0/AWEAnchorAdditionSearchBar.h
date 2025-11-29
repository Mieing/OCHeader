@class UIButton, NSString, AWEAnchorAdditionFakeNavBar, UIView, AWESearchBar;

@interface AWEAnchorAdditionSearchBar : UIView

@property (nonatomic) BOOL isWithOutFakeNavi;
@property (copy, nonatomic) id /* block */ searchKeywordBlock;
@property (copy, nonatomic) id /* block */ backBlock;
@property (copy, nonatomic) NSString *navBarTitle;
@property (copy, nonatomic) NSString *searchPlaceholder;
@property (retain, nonatomic) AWESearchBar *searchBar;
@property (retain, nonatomic) UIButton *searchCancelButton;
@property (retain, nonatomic) AWEAnchorAdditionFakeNavBar *fackNavBar;
@property (retain, nonatomic) UIView *searchBarContentView;

- (void)showSearchCancelButton;
- (void)hideSearchCancelButton;
- (id)initWithoutFakeNavi;
- (void)setupSearchBarUI;
- (void)setupSearchBarWithOutFakeNavi;
- (void)makeSearchBarIfNeeded;
- (void)animationWithSearchBarBeginEditing:(BOOL)a0;
- (void)backAction:(id)a0;
- (void)showSearchCancelButtonWithSuperview:(id)a0;
- (void)hideSearchCancelButtonWithSuperview:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)endEditing:(BOOL)a0;
- (void)updateText:(id)a0;

@end
