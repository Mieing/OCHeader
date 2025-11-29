@class NSString, MMLiveTaskId;

@interface MMLivePollingFetchTask : NSObject <MMPollingFetchQueueItemProtocol>

@property (nonatomic) long long lastExecuteTimeInterval;
@property (nonatomic) long long mostEarlyStartTime;
@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (nonatomic) long long cmdId;
@property (nonatomic) unsigned long long interval;
@property (readonly, nonatomic) long long sortId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithTaskId:(id)a0 cmdId:(long long)a1 interval:(unsigned long long)a2;

- (id)init;
- (void).cxx_destruct;

@end
