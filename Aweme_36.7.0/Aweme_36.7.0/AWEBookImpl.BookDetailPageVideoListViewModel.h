@interface AWEBookImpl.BookDetailPageVideoListViewModel : AWEBookImpl.BookBaseListViewModel {
    void /* unknown type, empty encoding */ tabInfo;
    void /* unknown type, empty encoding */ dataController;
    void /* unknown type, empty encoding */ bookDetailContext;
    void /* unknown type, empty encoding */ vcIsAppearing;
    void /* unknown type, empty encoding */ loadMoreIsPreload;
    void /* unknown type, empty encoding */ stayStartTime;
    void /* unknown type, empty encoding */ hasMore;
    void /* unknown type, empty encoding */ reloadLoadmoreDataHandler;
    void /* unknown type, empty encoding */ _currentDataState;
}

@property (nonatomic) long long dataState;

- (void)fetchListData;
- (void)loadMoreListData;
- (void).cxx_destruct;
- (id)init;

@end
