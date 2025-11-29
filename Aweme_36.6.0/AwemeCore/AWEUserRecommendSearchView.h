@class AWESearchBar, UIButton, NSString;

@interface AWEUserRecommendSearchView : UIView <UISearchBarDelegate>

@property (retain, nonatomic) AWESearchBar *searchBar;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *scanButton;
@property (nonatomic) BOOL shouldHideScanButton;
@property (copy, nonatomic) id /* block */ hideSearchPlaceHolderViewBlock;
@property (copy, nonatomic) id /* block */ showSearchPlaceHolderViewBlock;
@property (copy, nonatomic) id /* block */ searchBarTextChangedBlock;
@property (copy, nonatomic) id /* block */ searchUserBlock;
@property (copy, nonatomic) NSString *searchBarText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_cancelButtonTapped;
- (void)p_hideCancelButton;
- (void)p_showCancelButton;
- (void)hideScanButton;
- (void)p_showScanButton;
- (void)p_hideScanButton;
- (void)p_scanButtonTapped;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void).cxx_destruct;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)searchBarSearchButtonClicked:(id)a0;

@end
