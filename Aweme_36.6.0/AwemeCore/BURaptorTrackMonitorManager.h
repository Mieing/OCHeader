@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BURaptorTrackMonitorManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *pseudoTLSDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)sharedInstance;

- (id)_statsParamsWithType:(id)a0 eventExtra:(id)a1;
- (void)_pbu_logTracker:(id)a0;
- (void)buRaptorTrackMonitorManager_ExceptionTracker:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
