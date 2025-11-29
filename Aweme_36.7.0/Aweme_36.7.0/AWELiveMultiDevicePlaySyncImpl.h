@class NSString;

@interface AWELiveMultiDevicePlaySyncImpl : NSObject <IESLiveMultiDevicePlaySyncProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiveMultiDevicePlaySyncAdapterClass;

- (BOOL)disableMultiDevicePlaySync;
- (id)aAWELiveMultiDevicePlaySyncAdapter;

@end
