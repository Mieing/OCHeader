@class NSString, TIMXSDKInstance;

@interface TIMXRebuildAllMessagesFetcherOperation : NSOperation {
    BOOL _finished;
    BOOL _executing;
    TIMXSDKInstance *_r;
}

@property (copy, nonatomic) NSString *conversationIdentifier;
@property (nonatomic) long long minIndexV2;
@property (nonatomic) long long maxIndexV2;
@property (copy, nonatomic) id /* block */ completion;

- (void)markFinish;
- (id)initWithRootObject:(id)a0 conversationID:(id)a1 minIndexV2:(long long)a2 maxIndexV2:(long long)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (BOOL)isFinished;

@end
