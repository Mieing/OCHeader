@class NSString, MMUISearchBar;
@protocol WCFinderPOIRelatedListHalfTableViewSearchHeaderDelegate;

@interface WCFinderPOIRelatedListHalfTableViewSearchHeader : UITableViewHeaderFooterView <UISearchBarDelegate>

@property (retain, nonatomic) MMUISearchBar *searchBar;
@property (weak, nonatomic) id<WCFinderPOIRelatedListHalfTableViewSearchHeaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithReuseIdentifier:(id)a0;
- (void)initSearchBar;
- (void)layoutSubviews;
- (void)clickSearchBar:(id)a0;
- (void)updateSearchBarAppearance;
- (BOOL)searchBarShouldBeginEditing:(id)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)mmsearchBarBecomeActive;
- (void)mmsearchBarResignActive;
- (void).cxx_destruct;

@end
