@class NSString;

@interface IESIMAPPInfoService : HTSService <IESIMAPPInfoService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hostAppID;
- (id)hostAppDisplayName;
- (id)lcsAppID;
- (id)versionNameOfDouyin;
- (id)bundleVersionOfDouyin;
- (id)channel;
- (id)deviceID;
- (id)installID;
- (id)hostAppName;

@end
