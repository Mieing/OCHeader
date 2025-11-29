@interface WeChat.WebSearchPlugin_ReportManager : WebSearchPluginBase {
    void /* unknown type, empty encoding */ $__lazy_storage_$_featureReporter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stayTimeReporter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_menuActionReporter;
}

- (void)updateWithSearchId:(id)a0 requestId:(id)a1;
- (void)handleEvent:(id)a0 userInfo:(id)a1;
- (void)reportClickWithFeatureItem:(unsigned long long)a0;
- (void)reportExposedWithFeatureItemsStr:(id)a0;
- (void)reportExitWithType:(unsigned long long)a0;
- (void)reportMenuActionWithType:(long long)a0;
- (id)init;
- (void).cxx_destruct;

@end
