@interface BUStatsRaptorTracker : BURaptorTracker

+ (id)sharedInstance;

- (void)_pbu_inUnknown_sendWithPostDict:(id)a0 completionHandler:(id /* block */)a1;
- (long long)raptorTrackerType;
- (Class)raptorModelClass;
- (id)willCleanNotificationName;
- (id)didCleanNotificationName;
- (id)sentNotificationName;
- (id)eventKey;

@end
