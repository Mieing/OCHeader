@interface AWEKnowledgeSwiftImpl.HangoutCardInserter : NSObject <AWEDCFeedDataProcessorProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_pinTopManager;
    void /* unknown type, empty encoding */ generatePinTopTaskBlock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_wannaCardDataController;
    void /* unknown type, empty encoding */ totalCardCount;
    void /* unknown type, empty encoding */ dispatchGroup;
    void /* unknown type, empty encoding */ wannaCardModelArray;
    void /* unknown type, empty encoding */ wannaCardModelOfLoadMore;
}

- (void)onWillBeginRequestDataWithRequestType:(unsigned long long)a0;
- (void)asyncProcessDataArrayWithRequestType:(unsigned long long)a0 modelArray:(id)a1 args:(id)a2 completion:(id /* block */)a3;
- (void)onDidEndCompletionWithRequestType:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)onDidCancelRequestWithRequestType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
