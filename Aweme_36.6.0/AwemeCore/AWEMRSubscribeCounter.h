@protocol AWEMRSubscribeCounterObserver, NSCopying;

@interface AWEMRSubscribeCounter : NSObject

@property (copy, nonatomic) id<NSCopying> identifier;
@property (nonatomic) unsigned long long count;
@property (weak, nonatomic) id<AWEMRSubscribeCounterObserver> observer;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)decrease;
- (void)increase;

@end
