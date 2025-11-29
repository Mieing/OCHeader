@class __CMCLifeObserver, CMCEvent;

@interface CMCSubscription : NSObject

@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) unsigned long long subscribingState;
@property (retain, nonatomic) __CMCLifeObserver *currentKeeperLifeObserver;
@property (readonly, nonatomic) CMCEvent *event;
@property (nonatomic) unsigned long long numberOfTimes;
@property (weak, nonatomic) id keeper;

- (BOOL)isSubscribing:(id)a0;
- (void)feedWithEvent:(id)a0;
- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;
- (void)unsubscribe;

@end
