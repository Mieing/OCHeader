@protocol AWEUserCouplingProvider, AWEUserTracker;

@interface AWEUserConfiguration : NSObject

@property (retain, nonatomic) id<AWEUserTracker> tracker;
@property (retain, nonatomic) id<AWEUserCouplingProvider> couplingProvider;

+ (id)configurationWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
