@interface AWEKnowledgeSwiftImpl.InterestDetailPhotoViewModel : AWEBaseListViewModel {
    void /* unknown type, empty encoding */ pageContext;
    void /* unknown type, empty encoding */ dataController;
    void /* unknown type, empty encoding */ loadMoreIsPreload;
    void /* unknown type, empty encoding */ hasMore;
    void /* unknown type, empty encoding */ photosSectionViewModel;
    void /* unknown type, empty encoding */ downloadManager;
    void /* unknown type, empty encoding */ uploadManager;
    void /* unknown type, empty encoding */ _currentDataState;
    void /* unknown type, empty encoding */ enterBrowserIndex;
    void /* unknown type, empty encoding */ error;
}

@property (nonatomic) long long dataState;

- (void)fetchListData;
- (void).cxx_destruct;
- (id)init;

@end
