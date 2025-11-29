@interface IESLiveUserFollowStatusSubscriber : NSObject

@property (weak, nonatomic) id subscriber;
@property (copy, nonatomic) id /* block */ statusChangeCallback;

- (void).cxx_destruct;

@end
