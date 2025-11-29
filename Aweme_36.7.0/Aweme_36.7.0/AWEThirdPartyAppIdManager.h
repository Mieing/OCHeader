@class NSString;

@interface AWEThirdPartyAppIdManager : HTSService <AWEThirdPartyAppIdManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)forceSetupThirdPartyAccount;
+ (void)setupThirdPartyAccount;
+ (void)asyncSetupThirdPartyAccountWithCompletion:(id /* block */)a0;
+ (void)preSetupThirdPartyAccountAsynchronous;
+ (void)_setupThirdPartyAccountAsynchronous:(BOOL)a0 completion:(id /* block */)a1;


@end
