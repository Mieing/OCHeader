@class NSArray;

@interface IESLiveIMReplayMessageSubscriber : NSObject

@property (weak, nonatomic) id subscriber;
@property (retain, nonatomic) NSArray *subscribedMessages;
@property (nonatomic) long long replayMaxCount;

- (id)initWithSubscriber:(id)a0 forMessages:(id)a1 maxCount:(long long)a2;
- (void).cxx_destruct;

@end
