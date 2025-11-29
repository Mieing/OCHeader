@class NSString, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_queue, TIMXMessageStoreProtocol;

@interface TIMXMessageServerHasMoreManager : NSObject <TIMXInstanceScopeSingleton, TIMXMessageServerHasMoreProtocol> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue;
@property (retain, nonatomic) id<TIMXMessageStoreProtocol> db;
@property (nonatomic) BOOL enableStartIndex;
@property (nonatomic) double startIndexCheckInterval;
@property (nonatomic) double updateStartIndexCheckRatio;
@property (nonatomic) double trackStartIndexIsSuccessRatio;
@property (nonatomic) double trackStartIndexIsNotSuccessRatio;
@property (copy, nonatomic) NSString *startIndexPrefixKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkMessageServerHasMoreWithConversationID:(id)a0;
- (void)trackUpdateMinIndex:(long long)a0 withMinIndexV2:(long long)a1 conversationId:(id)a2 logId:(id)a3 source:(long long)a4;
- (id)startIndexKeyForConversation:(id)a0;
- (BOOL)resetConversationHasMore:(id)a0;
- (BOOL)resetConversationHasMore:(id)a0 forceChange:(BOOL)a1;
- (void)updateStartIndexForConversation:(id)a0 withAnchorIndex:(long long)a1 responseObject:(id)a2;
- (void)checkStartIndexForConversation:(id)a0;
- (BOOL)shouldFetchMsgsWithIndex:(long long)a0 startIndex:(long long)a1;
- (BOOL)shouldSampleWithRatio:(double)a0;
- (void)realCheckMessageServerHasMoreWithConversationID:(id)a0;
- (void)trackServerRealHasMore:(BOOL)a0 withTrackData:(id)a1;
- (void)checkServerRealHasMoreWithMinIndex:(long long)a0 conversation:(id)a1 trackData:(id)a2;
- (long long)getMinIndexV1WithMessagesArray:(id)a0;
- (void)realCheckStartIndexForConversation:(id)a0 context:(id)a1;
- (void)realCheckStartIndexForConversation:(id)a0;
- (void)checkFrequencyControlWithConversation:(id)a0 checkKey:(id)a1 interval:(double)a2 failBlock:(id /* block */)a3 successBlock:(id /* block */)a4;
- (void)trackCheckStartIndexWithTrackData:(id)a0 sampleRatio:(double)a1;
- (void)checkServerStartIndex:(long long)a0 conversation:(id)a1 trackData:(id)a2;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
