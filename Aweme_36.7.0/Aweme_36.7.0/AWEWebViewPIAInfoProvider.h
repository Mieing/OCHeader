@class NSString;

@interface AWEWebViewPIAInfoProvider : NSObject <PIAInterfaceUserInfoProtocol, PIAInterfaceApplicationInfoProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)appChannel;
- (id)hostUserAgent;
- (id)secUserID;
- (id)userID;
- (long long)appID;
- (id)appName;
- (id)appVersion;
- (id)deviceID;

@end
