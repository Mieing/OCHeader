@interface AWEStoryImpl.Story25OnboardingAlert : NSObject <AWEAlertProtocol> {
    void /* unknown type, empty encoding */ injectCanShow;
}

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (void)showWithContext:(id)a0 onClose:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
