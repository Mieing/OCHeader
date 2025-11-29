@interface AWEPizzaSwiftImpl.PizzaDataManager : NSObject <AWEUserMessage> {
    void /* unknown type, empty encoding */ lastRequestTime;
    void /* unknown type, empty encoding */ lastRetryTime;
    void /* unknown type, empty encoding */ lastRequestAllDomainSuccess;
    void /* unknown type, empty encoding */ isRequestingCount;
    void /* unknown type, empty encoding */ domainDataControls;
    void /* unknown type, empty encoding */ lastRequestSuccess;
    void /* unknown type, empty encoding */ networkManager;
    void /* unknown type, empty encoding */ currentUID;
    void /* unknown type, empty encoding */ _userService;
}

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)handleConnectionChanged:(id)a0;
- (void)onAccountPrivacyPolicyAgreeNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)appWillEnterForeground:(id)a0;

@end
