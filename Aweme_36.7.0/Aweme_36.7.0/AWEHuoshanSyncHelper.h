@class NSString;
@protocol AWEAccountManagerProtocol;

@interface AWEHuoshanSyncHelper : NSObject <AWEHuoshanSyncHelperProtocol>

@property (retain, nonatomic) id<AWEAccountManagerProtocol> accountManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)turnOnSyncWithCompletion:(id /* block */)a0;
- (void)requestTurnOffSyncWithCompletion:(id /* block */)a0;
- (id)thirdPartyUsernameForBindType:(unsigned long long)a0;
- (id)displayNameForBindType:(unsigned long long)a0;
- (id)loginInfo;
- (id)hideMiddleDigitsOfPhoneNumber:(id)a0;
- (void).cxx_destruct;

@end
