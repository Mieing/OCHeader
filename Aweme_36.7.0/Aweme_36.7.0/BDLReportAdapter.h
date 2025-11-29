@class NSString;

@interface BDLReportAdapter : NSObject <BDLReportProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)sharedInstance;

- (void)reportException:(id)a0;
- (id)backtraceWithMessage:(id)a0 bySkippedDepth:(unsigned long long)a1;
- (void)launchSession;

@end
