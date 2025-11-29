@class NSString;

@interface CachalotNSLogEventSender : NSObject <CachalotMonitorEventSenderProtrol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedSender;

- (void)sendEvent:(id)a0 category:(id)a1 metric:(id)a2 extra:(id)a3;

@end
