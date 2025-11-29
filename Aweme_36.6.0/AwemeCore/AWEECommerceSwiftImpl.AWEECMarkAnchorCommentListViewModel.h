@interface AWEECommerceSwiftImpl.AWEECMarkAnchorCommentListViewModel : AWEBaseListViewModel {
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ performanceTracker;
    void /* unknown type, empty encoding */ _listDataState;
    void /* unknown type, empty encoding */ commentVCFetchOperation;
    void /* unknown type, empty encoding */ commentVCLoadMoreOperation;
    void /* unknown type, empty encoding */ dataLoader;
    void /* unknown type, empty encoding */ _selectedTabModel;
    void /* unknown type, empty encoding */ _selectedAggregatedTermIDs;
    void /* unknown type, empty encoding */ needStartCommentInputEvent;
    void /* unknown type, empty encoding */ isCleaningCommentVC;
    void /* unknown type, empty encoding */ listModel;
    void /* unknown type, empty encoding */ focusCommentID;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ tabBarSectionViewModel;
    void /* unknown type, empty encoding */ aggregatedTermSectionViewModel;
    void /* unknown type, empty encoding */ loadingSectionViewModel;
    void /* unknown type, empty encoding */ emptyGuideSectionViewModel;
    void /* unknown type, empty encoding */ commentLoadMoreCursor;
    void /* unknown type, empty encoding */ serverLoadMorePassThrough;
    void /* unknown type, empty encoding */ fetchingRequestID;
    void /* unknown type, empty encoding */ commentListUUID;
    void /* unknown type, empty encoding */ postingCommentModel;
    void /* unknown type, empty encoding */ needsToastPostingCommentSuccessOnce;
    void /* unknown type, empty encoding */ viewHasNeverBeenRendered;
    void /* unknown type, empty encoding */ isTrackingCommentPageRendering;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataContext;
}

- (void)fetchListData;
- (void)loadMoreListData;
- (void)setupViewModel;
- (void).cxx_destruct;
- (id)init;

@end
