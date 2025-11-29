@class NSDate, BDCastProxyDataRequest;

@interface BDCastProxyRequestScheduleTask : NSObject

@property (weak, nonatomic) BDCastProxyDataRequest *request;
@property (copy, nonatomic) id /* block */ scheduleBlock;
@property (retain, nonatomic) NSDate *timestamp;

- (id)initWithRequest:(id)a0 scheduleBlock:(id /* block */)a1 timestamp:(id)a2;
- (void).cxx_destruct;

@end
