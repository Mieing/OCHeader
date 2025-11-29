@interface BDUGLocationMonitorRequest : NSObject

@property (nonatomic) long long level;
@property (copy, nonatomic) id /* block */ changedCallback;

- (id)initWithLevel:(long long)a0 changedCallback:(id /* block */)a1;
- (void).cxx_destruct;

@end
