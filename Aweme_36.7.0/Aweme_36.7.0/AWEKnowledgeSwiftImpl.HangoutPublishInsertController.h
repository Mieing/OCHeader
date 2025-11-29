@interface AWEKnowledgeSwiftImpl.HangoutPublishInsertController : AWEDCFeedBaseController <AWEPublishTaskMessage> {
    void /* unknown type, empty encoding */ publishTaskDict;
}

- (void)task:(id)a0 didAppendWithInfo:(id)a1;
- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)task:(id)a0 progressDidChangeWithInfo:(id)a1;
- (void)task:(id)a0 didPendingAtStage:(id)a1 error:(id)a2;
- (void)task:(id)a0 cancelWithResult:(BOOL)a1;
- (void)onLoadPlaceholderDataEndWithResult:(unsigned long long)a0 placeholderData:(id)a1;
- (void)enterContainerWithModel:(id)a0;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
