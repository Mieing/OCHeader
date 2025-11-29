@class NSArray;

@interface AWEIMPushMonitor : NSObject

@property (retain, nonatomic) NSArray *processingContextList;
@property (nonatomic) BOOL shouldRecordElapsedTime;

- (void)recordPushDurationStart:(id)a0 toEventContext:(id)a1;
- (void)recordPushDurationEnd:(id)a0 withEventContext:(id)a1;
- (void)contextPerformanceInfoInitial:(id)a0 withInsertingMessageContext:(id)a1;
- (void)recordPushEventDealStartWithContext:(id)a0;
- (void)recordPushEventDealEndWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
