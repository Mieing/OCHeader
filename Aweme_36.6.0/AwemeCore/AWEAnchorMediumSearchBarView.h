@class UIButton, AWESearchBar;

@interface AWEAnchorMediumSearchBarView : UIView

@property (retain, nonatomic) UIButton *searchCancelButton;
@property (retain, nonatomic) AWESearchBar *searchBar;

- (void)showSearchCancelButton;
- (void)hideSearchCancelButton;
- (void)searchCancelButtonTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSearchBar;
- (void)updateText:(id)a0;

@end
