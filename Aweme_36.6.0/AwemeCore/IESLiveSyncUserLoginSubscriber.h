@interface IESLiveSyncUserLoginSubscriber : NSObject

@property (weak, nonatomic) id subscriber;
@property (copy, nonatomic) id /* block */ syncUserLoginCallback;

- (void).cxx_destruct;

@end
