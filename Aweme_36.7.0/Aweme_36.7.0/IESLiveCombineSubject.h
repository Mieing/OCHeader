@interface IESLiveCombineSubject : IESLivePublisher

+ (id)currentValueSubject;
+ (id)passthroughSubject;
+ (id)subject;

- (void)sendVoid;
- (void)sendValue:(id)a0;
- (void)sendCompletion;

@end
