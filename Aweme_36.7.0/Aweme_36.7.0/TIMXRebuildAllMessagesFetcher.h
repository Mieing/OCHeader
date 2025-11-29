@class NSOperationQueue, TIMXSDKInstance;

@interface TIMXRebuildAllMessagesFetcher : NSObject {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSOperationQueue *fetcherQueue;

- (id)fetchAllMessagesFromConversationIdentifier:(id)a0 minIndexV2:(long long)a1 maxIndexV2:(long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)cancelAllOperations;
- (id)initWithRootObject:(id)a0;

@end
