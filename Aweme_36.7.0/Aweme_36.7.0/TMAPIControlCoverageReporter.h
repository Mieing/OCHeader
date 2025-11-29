@class NSString;

@interface TMAPIControlCoverageReporter : NSObject <TMAPIControlEventSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleResultEvent:(id)a0;
- (BOOL)canHandleResultEvent:(id)a0;
- (void)reportWithEvent:(id)a0;
- (void)reportBPEANotCover:(id)a0;
- (void)reportBPEACoverage:(id)a0 withCert:(id)a1 withMonitor:(id)a2;
- (void)handleEvent:(id)a0;

@end
