@class NSMutableDictionary;

@interface AWESearchMiddlePageTraceMonitor : NSObject

@property (retain, nonatomic) NSMutableDictionary *performaceData;
@property (retain, nonatomic) NSMutableDictionary *baseExtraData;
@property (nonatomic) BOOL beforeSearchInit;
@property (nonatomic) BOOL enableTraceMonitor;

+ (id)sharedInstance;

- (void)resetMonitor;
- (void)addMonitorPerfData:(id)a0 extraData:(id)a1;
- (id)getMiddelMonitorTraceData;
- (void)startMonitorWithPerfData:(id)a0 withExtraData:(id)a1 beforeSearchInit:(BOOL)a2;
- (void).cxx_destruct;

@end
