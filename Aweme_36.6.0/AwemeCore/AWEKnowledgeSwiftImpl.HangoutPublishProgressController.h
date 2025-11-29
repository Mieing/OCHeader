@interface AWEKnowledgeSwiftImpl.HangoutPublishProgressController : AWEDCFeedBaseController <AWEPublishTaskMessage> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_progressView;
    void /* unknown type, empty encoding */ landingTaskSet;
    void /* unknown type, empty encoding */ publishTaskDict;
}

- (void)task:(id)a0 didAppendWithInfo:(id)a1;
- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)onLoadPlaceholderDataEndWithResult:(unsigned long long)a0 placeholderData:(id)a1;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)containerViewWillLayoutSubviews;
- (id)init;
- (void)containerViewDidLoad;

@end
