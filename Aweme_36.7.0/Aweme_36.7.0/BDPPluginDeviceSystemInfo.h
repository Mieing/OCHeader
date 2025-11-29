@class NSString, NSDictionary;

@interface BDPPluginDeviceSystemInfo : NSObject <BDPAPPFramePreloadProtocol> {
    NSDictionary *_systemInfoLandSpace;
    NSDictionary *_systemInfoVertical;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (void)startPreloadSystemInfo;
+ (id)sharedInstance;

- (id)systemInfoDictionaryWithOrientation:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
