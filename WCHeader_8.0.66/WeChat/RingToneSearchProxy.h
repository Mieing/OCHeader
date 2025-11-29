@class NSString, RingToneRecommendReporter_23604, RingToneSearchViewModel, WCSearcher, MMTListAdapter, CContact, WCTimeLineFooterView;
@protocol RingToneSearchProxyDelegate;

@interface RingToneSearchProxy : NSObject <MMRefreshTableFooterDelegate, MMTListAdapterDataSource, RingTonePickerSectionControllerDelegate, WCSearchDelegate, UIScrollViewDelegate> {
    BOOL _isFetchingData;
}

@property (weak, nonatomic) WCSearcher *searcher;
@property (retain, nonatomic) RingToneSearchViewModel *viewModel;
@property (retain, nonatomic) WCTimeLineFooterView *footerView;
@property (retain, nonatomic) MMTListAdapter *listAdapter;
@property (nonatomic) unsigned long long searchRequestID;
@property (retain, nonatomic) RingToneRecommendReporter_23604 *reporter;
@property (retain, nonatomic) CContact *exclusiveContact;
@property (weak, nonatomic) id<RingToneSearchProxyDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSearcher:(id)a0;
- (void)configSearcher;
- (void)initListAdapter;
- (void)searchWithFirstPage:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)wcsWillDismissSearch:(id)a0;
- (void)wcsWillPresentSearch:(id)a0;
- (void)wcsSearchBarSearchButtonClicked:(id)a0;
- (void)wcsSearchBar:(id)a0 textDidChange:(id)a1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (void)didSelectRowAtIndex:(long long)a0;
- (void)jumpToPlayerPage:(id)a0 index:(long long)a1;
- (void)willDisplayCellAtIndex:(long long)a0;
- (void)jumpToAuthorPage:(id)a0;
- (void)onExclusiveRingPlay:(id)a0 isToPlay:(BOOL)a1;
- (id)getFriendName;
- (void).cxx_destruct;

@end
