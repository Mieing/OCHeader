@interface FlowKit.MessagingAccountComponent : FlowCommon.TightCouplingComponent {
    void /* unknown type, empty encoding */ _loginProvider;
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ _profileProvider;
    void /* unknown type, empty encoding */ _appletService;
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ isFirstLoad;
}

- (void)messageLimitedTouch:(id)a0;
- (void)countryRestricted;
- (void)handleAccountWillLogout;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
