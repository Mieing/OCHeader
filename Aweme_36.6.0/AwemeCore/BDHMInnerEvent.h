@class NSString, NSDictionary;

@interface BDHMInnerEvent : NSObject

@property (copy, nonatomic) NSString *traceId;
@property (copy, nonatomic) NSString *eventType;
@property (copy, nonatomic) NSDictionary *infoDict;
@property (nonatomic) long long phase;
@property (nonatomic) long long terminatedReason;

- (void).cxx_destruct;

@end
