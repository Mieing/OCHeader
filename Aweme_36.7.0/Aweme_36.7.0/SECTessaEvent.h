@class NSString, NSDictionary, SECStopWatch, SECTessaCommit;

@interface SECTessaEvent : NSObject <SECBaseEvent>

@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) SECTessaCommit *tessa;
@property (retain, nonatomic) SECStopWatch *stopWatch;
@property (copy, nonatomic) NSString *phase;
@property (copy, nonatomic) NSString *tessaType;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long sampleRate;
@property (copy) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
