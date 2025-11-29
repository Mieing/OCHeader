@class NSString, SECStopWatch, NSMutableDictionary;

@interface SECSampledEvent : NSObject <SECBaseEvent>

@property (retain, nonatomic) SECStopWatch *stopWatch;
@property (copy, nonatomic) NSString *eventName;
@property (nonatomic) unsigned long long sampleRate;
@property (readonly, nonatomic) NSMutableDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startTiming:(id)a0;
- (void)doSampleStep:(id /* block */)a0;
- (id)initWithSampleRate:(unsigned long long)a0 eventName:(id)a1 stopWatchName:(id)a2;
- (void).cxx_destruct;
- (void)stop;
- (id)eventType;

@end
