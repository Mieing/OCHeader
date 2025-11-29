@class NSString;
@protocol BDXBridgeContainerProtocol;

@interface BDXBridgeEventSubscriber : NSObject

@property (retain, nonatomic) NSString *poi_eventName;
@property (retain, nonatomic) NSString *iesll_poi_eventName;
@property (weak, nonatomic) id<BDXBridgeContainerProtocol> container;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) double timestamp;
@property (copy, nonatomic) NSString *eventId;
@property (copy, nonatomic) NSString *containerId;
@property (nonatomic) BOOL shouldFilterEvent;

+ (id)subscriberWithCallback:(id /* block */)a0;
+ (id)subscriberWithEventId:(id)a0 callback:(id /* block */)a1;
+ (id)subscriberWithContainer:(id)a0 timestamp:(double)a1;

- (void).cxx_destruct;
- (BOOL)receiveEvent:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
