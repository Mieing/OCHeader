@class NSString;

@interface PNSBacktraceImpl : NSObject <PNSBacktraceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)getImageHeaderAddressWithName:(id)a0;
- (id)getBacktracesWithSkippedDepth:(unsigned long long)a0 needAllThreads:(BOOL)a1;
- (void)getFormatBacktracesWithNeedAllThreads:(BOOL)a0 callback:(id /* block */)a1;
- (unsigned long long)getRecentSystemLinesWithSkippedDepth:(unsigned long long)a0;
- (id)formatBacktraces:(id)a0;
- (id)getCurrentBacktraceAddressesWithSkippedDepth:(unsigned long long)a0;
- (id)mergeBacktracesWithFirst:(id)a0 second:(id)a1;

@end
