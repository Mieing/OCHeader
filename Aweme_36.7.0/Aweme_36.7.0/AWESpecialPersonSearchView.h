@class AWESearchBar, UIButton, NSString;
@protocol AWESpecialPersonSearchViewDelegate;

@interface AWESpecialPersonSearchView : UIView <UISearchBarDelegate>

@property (retain, nonatomic) AWESearchBar *searchBar;
@property (retain, nonatomic) UIButton *cancelButton;
@property (copy, nonatomic) NSString *searchText;
@property (weak, nonatomic) id<AWESpecialPersonSearchViewDelegate> delegate;
@property (copy, nonatomic) NSString *placeHolderText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_cancelButtonTapped;
- (void)finishSearch;
- (void)endInputText;
- (void)p_hideCancelButton;
- (void)p_showCancelButton;
- (void)searchBarResignFirstResponder;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)searchBarSearchButtonClicked:(id)a0;

@end
