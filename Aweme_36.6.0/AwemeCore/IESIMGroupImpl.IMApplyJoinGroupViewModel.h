@interface IESIMGroupImpl.IMApplyJoinGroupViewModel : AWEBaseListViewModel {
    void /* unknown type, empty encoding */ dataContext;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ _dataManagerInterface;
    void /* unknown type, empty encoding */ bindingStore;
    void /* unknown type, empty encoding */ joinGroupSection;
    void /* unknown type, empty encoding */ isMultiSelectMode;
    void /* unknown type, empty encoding */ finishFirstFetch;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pageState;
    void /* unknown type, empty encoding */ asyncUpdateEndSignal;
    void /* unknown type, empty encoding */ needsDelayedUpdate;
}

- (void)fetchListData;
- (void)loadMoreListData;
- (void)setupViewModel;
- (void).cxx_destruct;
- (id)init;

@end
