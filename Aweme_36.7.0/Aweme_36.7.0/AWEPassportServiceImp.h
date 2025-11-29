@class NSString;

@interface AWEPassportServiceImp : HTSService <AWEPassportService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)login:(id /* block */)a0;
- (void)login:(id /* block */)a0 withTrackerInformation:(id)a1;
- (BOOL)isVCDEnable;
- (BOOL)enableAccountSDK;
- (void)convertOpenIDToUIDWithinCurrentUserList:(id)a0 clientKey:(id)a1 completion:(id /* block */)a2;
- (void)trackAccountDrop:(id)a0 scene:(id)a1 error:(id)a2 extraParams:(id)a3;
- (id)currentUser;
- (BOOL)isLogin;

@end
