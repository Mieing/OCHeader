@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface HMDMemoryMonitor : HMDMonitor

@property (nonatomic) double lastWarningTime;
@property (nonatomic) unsigned long long lastWarningType;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *memoryPressureSource;
@property (retain, nonatomic) NSMutableDictionary *customData;

+ (id)sharedMonitor;

- (unsigned long long)reporterPriority;
- (void)didEnterScene:(id)a0;
- (void)willLeaveScene:(id)a0;
- (id)refresh:(unsigned long long)a0 relativeforScene:(id)a1 identifier:(id)a2;
- (void)customTrackBeginWithIdentifier:(id)a0;
- (void)customTrackEndWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)refresh;
- (void)stop;
- (void)start;
- (void)didReceiveMemoryWarning:(id)a0;
- (Class)storeClass;

@end
