@interface BDPSensitiveSafeAPIUtils : NSObject

+ (void)requestAccessMicrophoneWithCompletionHandler:(id /* block */)a0;
+ (void)requestAccessVideoWithAppId:(id)a0 apiName:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)startRunningWithCaptureSession:(id)a0 appId:(id)a1 apiName:(id)a2 error:(id *)a3;
+ (BOOL)stopRunningWithCaptureSession:(id)a0 appId:(id)a1 apiName:(id)a2 error:(id *)a3;
+ (void)getPasteboardStringWithCompletionHandler:(id /* block */)a0 appId:(id)a1 apiName:(id)a2;
+ (void)openURL:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2 type:(unsigned long long)a3 appId:(id)a4 apiName:(id)a5;
+ (id)getSKStoreWithError:(id *)a0 appId:(id)a1 apiName:(id)a2;
+ (id)getPredicateWithStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2 eventStore:(id)a3 error:(id *)a4 appId:(id)a5 apiName:(id)a6;
+ (id)getEventsMatchingPredicate:(id)a0 eventStore:(id)a1 error:(id *)a2 appId:(id)a3 apiName:(id)a4;
+ (long long)getCalendarAuthorizationStatusWithError:(id *)a0 appId:(id)a1 apiName:(id)a2;
+ (void)requestAccessCalendarWithEventStore:(id)a0 completion:(id /* block */)a1;
+ (BOOL)saveCalendarEvent:(id)a0 eventStore:(id)a1 error:(id *)a2 appId:(id)a3 apiName:(id)a4;
+ (BOOL)removeCalendarEvent:(id)a0 eventStore:(id)a1 error:(id *)a2 appId:(id)a3 apiName:(id)a4;
+ (id)getCalendarsForEventStore:(id)a0 error:(id *)a1 appId:(id)a2 apiName:(id)a3;
+ (void)fetchCurrentWithCompletionHandler:(id /* block */)a0 error:(id *)a1 appId:(id)a2 apiName:(id)a3;
+ (void)openURL:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2 type:(unsigned long long)a3;
+ (void)setPasteboardString:(id)a0 handler:(id /* block */)a1 appId:(id)a2 apiName:(id)a3;
+ (void)requestAccessVideoWithCompletionHandler:(id /* block */)a0;
+ (id)getSKStoreWithError:(id *)a0;

@end
