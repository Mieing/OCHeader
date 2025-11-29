@interface AFDStoryWaterfallPublishAlertWrapper : NSObject <AWEAlertProtocol> {
    void /* unknown type, empty encoding */ publishTask;
    void /* unknown type, empty encoding */ waterfallVisibleCheckBlock;
    void /* unknown type, empty encoding */ waterfallLandingBlock;
}

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (void)showWithContext:(id)a0 onClose:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
