@class NSString;

@interface DYVCDAccountVerifyService : NSObject <DYVCDAccountVerifyServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)verifyWithUid:(id)a0 type:(unsigned long long)a1 completion:(id /* block */)a2;
+ (unsigned long long)verifyTypeForPlatform:(unsigned long long)a0 currentAccount:(id)a1 targetAccount:(id)a2;
+ (BOOL)needVerifyWithPlatform:(unsigned long long)a0;
+ (void)updateVerifiedUid:(id)a0;
+ (Class)aAWEUserCommonAdapterClass;
+ (id)verifiedUids;
+ (void)verifySMSWithUid:(id)a0 completion:(id /* block */)a1;
+ (void)verifyThirdWithPlatform:(unsigned long long)a0 uid:(id)a1 completion:(id /* block */)a2;
+ (void)alertWithPlatform:(unsigned long long)a0 completion:(id /* block */)a1;
+ (BOOL)enterVerifyWithVC:(id)a0 currentVC:(id)a1;

- (id)aAWEUserCommonAdapter;

@end
