@class NSString;

@interface HMDOTSpanCustomEventData : NSObject <HMDOTSpanMovinglineDataProtocol>

@property (copy, nonatomic) NSString *event;
@property (nonatomic) unsigned long long threadID;
@property (copy, nonatomic) NSString *threadName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generateMovinglineData;
- (void).cxx_destruct;

@end
