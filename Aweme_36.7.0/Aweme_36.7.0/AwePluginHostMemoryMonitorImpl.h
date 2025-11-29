@class NSString;

@interface AwePluginHostMemoryMonitorImpl : NSObject <BDPHostMemoryMonitorPluginDelegate>

@property (nonatomic) long long systemMemoryPressureLevel;
@property (nonatomic) long long appMemoryPressureLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (BOOL)isMemoryDangerTopLevel;
- (void)addMemoryObserver;
- (BOOL)isMemoryDangerSecondLevel;
- (void)receiveMemoryDangerLevelTopNotification;
- (void)receiveMemoryDangerLevelSecondaryNotification;
- (id)init;
- (void)addObserver;
- (void)dealloc;

@end
