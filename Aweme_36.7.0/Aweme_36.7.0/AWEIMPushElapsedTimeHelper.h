@class NSString;

@interface AWEIMPushElapsedTimeHelper : NSObject <IESIMPushElapsedTimeInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;
+ (id)monitorWithEvent:(id)a0 context:(id)a1;
+ (id)createMonitorWithEvent:(id)a0;
+ (id)appendMonitorIntoElapsedTimeInfo:(id)a0 monitor:(id)a1;
+ (BOOL)isValidInfo:(id)a0;
+ (id)recordEndWholeElaspedTimeMonitorWithElapsedTimInfo:(id)a0;
+ (id)generateFinalElaspedTimeInfo:(id)a0;
+ (id)appendMonitorIntoElapsedTimeInfo:(id)a0 monitors:(id)a1;
+ (id)generateElapsedTimeInfoWithInsertingMessageContext:(id)a0;

- (BOOL)enableTraceShowingPushElapsedTime;

@end
