@interface WeChat.FTSHomePageReporter : NSObject {
    void /* unknown type, empty encoding */ listAdapter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stayTimeReporter;
    void /* unknown type, empty encoding */ hasReportedExit;
}

- (long long)itemCountBeforeSection:(long long)a0;
- (void)reportEnterPage;
- (void)reportExitPageWithType:(unsigned long long)a0;
- (id)initWithListAdapter:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
