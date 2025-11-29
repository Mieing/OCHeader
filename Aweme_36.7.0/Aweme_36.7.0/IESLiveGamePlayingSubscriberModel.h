@interface IESLiveGamePlayingSubscriberModel : NSObject

@property (weak, nonatomic) id subscriber;
@property (copy, nonatomic) id /* block */ isGamePlayingBlock;

- (id)initWithSubscriber:(id)a0 isGamePlayingBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
