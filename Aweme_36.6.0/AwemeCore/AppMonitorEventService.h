@class AppMonitorSdkAdapter, NSMutableDictionary, NSLock;

@interface AppMonitorEventService : NSObject {
    NSLock *_lock;
}

@property (retain, nonatomic) NSMutableDictionary *string_x_durationEvent_Dict;
@property (retain, nonatomic) AppMonitorSdkAdapter *sdkAdapter;
@property (nonatomic) struct dispatch_queue_s { } *ioQueue;

+ (id)sharedInstance;

- (void)uploadRealTimeEventForRawEvent:(id)a0;
- (id)getTransactionIdByModule:(id)a0 monitorPoint:(id)a1;
- (void)resetTransactionIdByModule:(id)a0 monitorPoint:(id)a1;
- (id)getRealTimeEventForUTDimensionValueSet:(id)a0 rawEvent:(id)a1;
- (void)countEventCommitWithEventId:(id)a0 module:(id)a1 monitorPoint:(id)a2 value:(double)a3 extraInfo:(id)a4 realTimeDebug:(BOOL)a5;
- (void)mergeEventWithConfig:(id)a0 utDimensionValueSet:(id)a1 event:(id)a2;
- (void)cleanExpiredEvent;
- (void)uploadAllEvent;
- (void)beginStatEventWithTransactionId:(id)a0 eventId:(id)a1 module:(id)a2 monitorPoint:(id)a3 measureName:(id)a4;
- (void)endStatEventWithTransactionId:(id)a0 measureName:(id)a1 resetTransactionId:(BOOL)a2 realTimeDebug:(BOOL)a3;
- (void)commitStatEventWithEventId:(id)a0 module:(id)a1 monitorPoint:(id)a2 DimensionValueSet:(id)a3 measureValueSet:(id)a4 realTimeDebug:(BOOL)a5;
- (void)beginStatEventWithEventId:(id)a0 module:(id)a1 monitorPoint:(id)a2 measureName:(id)a3;
- (void)endStatEventWithModule:(id)a0 monitorPoint:(id)a1 measureName:(id)a2;
- (void)alarmEventSuccessIncrWithEventId:(id)a0 module:(id)a1 monitorPoint:(id)a2 extraInfo:(id)a3 realTimeDebug:(BOOL)a4;
- (void)alarmEventFailIncrWithEventId:(id)a0 module:(id)a1 monitorPoint:(id)a2 errorCode:(id)a3 errorMsg:(id)a4 extraInfo:(id)a5 realTimeDebug:(BOOL)a6;
- (void).cxx_destruct;
- (id)init;

@end
