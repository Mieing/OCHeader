@class NSString;

@interface AWEUGFCollectTracker : HTSService <AWEUGFCollectTrackerProtocol>

@property (nonatomic) BOOL shouldMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)reportFCollectExceptionWithExceptionType:(id)a0;
- (void)startMonitorFCollectException;

@end
