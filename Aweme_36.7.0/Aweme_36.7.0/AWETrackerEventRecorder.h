@class NSMutableArray;

@interface AWETrackerEventRecorder : NSObject

@property (retain, nonatomic) NSMutableArray *hostAcceptedEvents;
@property (retain, nonatomic) NSMutableArray *sdkInitiatedEvents;
@property (retain, nonatomic) NSMutableArray *sdkStoredEvents;
@property (retain, nonatomic) NSMutableArray *sdkDiscardedEvents;
@property (nonatomic) unsigned long long hostAcceptedEventsLimit;
@property (nonatomic) unsigned long long sdkInitiatedEventsLimit;
@property (nonatomic) unsigned long long sdkStoredEventsLimit;
@property (nonatomic) unsigned long long sdkDiscardedEventsLimit;

+ (id)sharedInstance;

- (void)onHostEventAccept:(id)a0 params:(id)a1;
- (void)onSDKEventInitialized:(id)a0;
- (void)onSDKEventStored:(id)a0;
- (void)onSDKEventDiscarded:(id)a0 withError:(id)a1;
- (void)onSDKEventUploaded:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
