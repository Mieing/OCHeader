@class IESLiveCompoundSubscription, NSMutableArray;

@interface IESLiveCombinePassthroughSubject : IESLiveCombineSubject

@property (retain, nonatomic) NSMutableArray *subscribers;
@property (retain, nonatomic) IESLiveCompoundSubscription *subscriptions;

+ (id)subject;

- (void)sendVoid;
- (void)realSendValue:(id)a0;
- (void)subscribe:(id)a0 bindingToSubscription:(id)a1;
- (void)sendValue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)sendCompletion;

@end
