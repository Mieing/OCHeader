@interface BrandServiceContactsViewController : BrandContactsViewController

- (BOOL)isContactNeedExtraFiltered:(id)a0;
- (id)vcTitle;
- (id)bottomCountString;
- (unsigned int)searchbarScene;
- (id)webSearchSuffix;
- (id)getSearchEmptyTipsLabelText;
- (void)onShowSearchBrandView:(id)a0;
- (void)onShowAuthList;
- (unsigned long long)getContactsDataScene;
- (unsigned int)getFTSSearchType;
- (unsigned long long)getAsyncSearchOption;
- (id)getContactResultKey;

@end
