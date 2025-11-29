@class SECEventCenter;

@interface SECTessaEventCenter : NSObject

@property (retain, nonatomic) SECEventCenter *eventCenter;

+ (id)shared;

- (void)publishEvent:(id)a0;
- (void)addSubscriber:(id)a0 forEvent:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
