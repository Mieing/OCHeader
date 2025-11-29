@class NSString;

@interface CGXCommonParamsImpl : NSObject <CGXCommonParamsDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (id)getPPEEnv;
- (id)getNetworkType;
- (int)getNetworkQuality;
- (id)getAppId;
- (id)getAppVersion;
- (id)getAppChannel;
- (id)getDeviceId;
- (BOOL)isBOEEnable;
- (id)getBOEEnv;
- (BOOL)isPPEEnable;
- (BOOL)isForegroundRunning;
- (id)getLifecycleState;
- (id)getDeviceType;
- (id)getUserId;

@end
