@class NSString;

@interface AwePluginNetworkQualityImpl : NSObject <BDPHostNetworkQualityPluginDelegate>

@property (nonatomic) double lastReceiveWeakNetNotiTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (long long)getNetworkQuality;
- (void)receiveWeakNetNoti;
- (id)networkQualityInfo;
- (id)getWeakNetworkStatus;
- (id)init;
- (void)addObserver;
- (void)dealloc;

@end
