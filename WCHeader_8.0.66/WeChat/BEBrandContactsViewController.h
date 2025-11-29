@interface BEBrandContactsViewController : BrandContactsViewController

- (void)viewDidLoad;
- (BOOL)isContactNeedExtraFiltered:(id)a0;
- (id)vcTitle;
- (id)bottomCountString;
- (unsigned int)searchbarScene;
- (id)webSearchSuffix;
- (id)getSearchEmptyTipsLabelText;
- (void)initNavbar;
- (void)tableViewWillDisplayRowAtIndexPath:(id)a0 contact:(id)a1;
- (void)tableViewDidSelectRowAtIndexPath:(id)a0 contact:(id)a1;
- (unsigned long long)getContactsDataScene;
- (unsigned int)getFTSSearchType;
- (unsigned long long)getAsyncSearchOption;
- (id)getContactResultKey;

@end
