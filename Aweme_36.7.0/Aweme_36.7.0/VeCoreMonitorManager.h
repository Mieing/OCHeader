@class HMDTTMonitor, NSMutableDictionary, NSString, NSMutableSet, VeCoreConfigObject, NSMutableArray;

@interface VeCoreMonitorManager : NSObject

@property (retain, nonatomic) HMDTTMonitor *ttMonitor;
@property (retain, nonatomic) NSMutableArray *lazyEventArray;
@property (retain, nonatomic) NSMutableDictionary *userTouchEventDict;
@property (retain, nonatomic) NSMutableSet *sessionEventSet;
@property (retain, nonatomic) NSMutableDictionary *periodicEventDict;
@property (nonatomic) BOOL reportStatus;
@property (copy, nonatomic) NSString *accountId;
@property (copy, nonatomic) NSString *volcProduct;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *initialSessionId;
@property (retain, nonatomic) VeCoreConfigObject *configObj;

+ (void)trackService:(id)a0 eventData:(id)a1;
+ (void)ttMonitor:(id)a0 eventData:(id)a1;
+ (void)llamaLogReport:(id)a0 logType:(id)a1;
+ (id)extra;
+ (id)sharedInstance;
+ (void)reset;

- (void).cxx_destruct;
- (id)init;

@end
