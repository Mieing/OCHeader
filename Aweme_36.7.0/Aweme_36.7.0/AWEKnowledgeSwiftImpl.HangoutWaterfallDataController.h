@interface AWEKnowledgeSwiftImpl.HangoutWaterfallDataController : AWEListDataController {
    void /* unknown type, empty encoding */ tabType;
    void /* unknown type, empty encoding */ enterFrom;
    void /* unknown type, empty encoding */ dataFilterBlock;
    void /* unknown type, empty encoding */ isRequesting;
    void /* unknown type, empty encoding */ modelsArray;
    void /* unknown type, empty encoding */ fromItem;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ dataBuffer;
    void /* unknown type, empty encoding */ spareModelsArray;
    void /* unknown type, empty encoding */ pullCount;
    void /* unknown type, empty encoding */ totalItemCount;
    void /* unknown type, empty encoding */ footerShowDuringRequest;
}

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
