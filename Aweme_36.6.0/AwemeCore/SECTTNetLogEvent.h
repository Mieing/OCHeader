@class NSString, NSDictionary;

@interface SECTTNetLogEvent : NSObject <SECBaseEvent>

@property (copy, nonatomic) NSString *logType;
@property (copy, nonatomic) NSDictionary *ttnetMonitorLog;
@property (copy, nonatomic) NSString *strategyName;
@property (nonatomic) unsigned long long sampleRate;
@property (nonatomic) double happenTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)eventType;
- (void)finish;

@end
