@class NSString;

@interface IESIMDoubleTrackerManager : NSObject <IESIMAppDoubleTrackerManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)monitorTrackService:(id)a0 status:(long long)a1 params:(id)a2;
- (void)doubleTrackEvent:(id)a0 status:(long long)a1 params:(id)a2;
- (void)applogTrackEvent:(id)a0 params:(id)a1;
- (void)trackThreadLogWithType:(id)a0 parameter:(id)a1 callback:(id /* block */)a2;
- (void)dbMark:(id)a0 launchTime:(float)a1 cmdID:(int)a2;
- (void)dbMark:(id)a0 beginTime:(unsigned long long)a1;
- (BOOL)shouldTrackLaunchIO;
- (void)traceThreadWithScene:(id)a0 params:(id)a1;
- (BOOL)shouldTrackEvent:(id)a0;

@end
