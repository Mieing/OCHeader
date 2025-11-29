@interface AWEKnowledgeSwiftImpl.InterestDetailContentViewModel : AWEBaseListViewModel {
    void /* unknown type, empty encoding */ pageContext;
    void /* unknown type, empty encoding */ dataController;
    void /* unknown type, empty encoding */ contentSectionViewModel;
    void /* unknown type, empty encoding */ _currentDataState;
    void /* unknown type, empty encoding */ error;
}

@property (nonatomic) long long dataState;

- (void)fetchListData;
- (void)loadMoreListData;
- (void).cxx_destruct;
- (id)init;

@end
