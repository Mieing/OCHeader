@class NSString, CloudBackupPlatformProviderCallback;

@interface WXGCloudRoamPlatformProvider : NSObject <CloudBackupPlatformProviderBase>

@property (retain, nonatomic) CloudBackupPlatformProviderCallback *zidlCallback;
@property (retain, nonatomic) NSString *keychainServiceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (id)getBackupReq;
- (BOOL)isWiFi;
- (BOOL)isWWAN;
- (void)pushRouteAsync:(unsigned long long)a0 routeName:(id)a1 params:(id)a2;
- (void)pushRouteAsyncImpl:(unsigned long long)a0 routeName:(id)a1 params:(id)a2;
- (id)getContactNicknames;
- (void)removeMediaAsync:(unsigned long long)a0 req:(id)a1;
- (void)setCallback:(id)a0;
- (BOOL)isMainDevice;
- (void)writeKeychain:(id)a0;
- (id)readKeychain;
- (void)deleteKeychain;
- (void).cxx_destruct;

@end
