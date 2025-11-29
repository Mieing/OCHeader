@class NSString, RxMultipleDelegate;
@protocol RTVAccountStateObserver;

@interface RTVAccountService : NSObject <AWEUserMessage, AWEDigitalWellbeingMessage, RTVAccountServiceInterface>

@property (retain, nonatomic) RxMultipleDelegate<RTVAccountStateObserver> *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)rxAwakeFromPropertyInjection;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addStateObserver:(id)a0;
- (void)removeStateObserver:(id)a0;

@end
