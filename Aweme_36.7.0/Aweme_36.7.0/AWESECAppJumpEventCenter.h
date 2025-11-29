@class SECEventCenter;

@interface AWESECAppJumpEventCenter : NSObject

@property (retain, nonatomic) SECEventCenter *eventCenter;

+ (void)publishEvent:(id)a0;
+ (void)registerSubscriber:(id)a0 forEventType:(id)a1;
+ (id)shared;

- (void)publishEvent:(id)a0;
- (void)registerSubscriber:(id)a0 forEventType:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
