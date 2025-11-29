@interface BDPNetworkDeferTask : BDPNetworkAsyncTask {
    BOOL _active;
    BOOL _resume;
}

@property (getter=isActive) BOOL active;

- (void)suspend;
- (void)resume;
- (void)cancel;

@end
