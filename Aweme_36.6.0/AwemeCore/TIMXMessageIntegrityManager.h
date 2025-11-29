@class NSString, NSMutableArray, TIMXSDKInstance;

@interface TIMXMessageIntegrityManager : NSObject <TIMXInstanceScopeSingleton, TIMXMessageIntegrityProtocol> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSMutableArray *cmdIndexs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)intergrityConversationInfoWithIdentifier:(id)a0 shortId:(long long)a1 type:(int)a2;
- (void)recursivelyFetchMsgesWithIndexV1:(long long)a0 indexV2:(long long)a1 conversation:(id)a2 direction:(unsigned long long)a3 maxRecursiveCount:(long long)a4 completionBlock:(id /* block */)a5;
- (void)recursivelyFetchMsgesWithIndexV1_V2:(long long)a0 indexV2:(long long)a1 conversation:(id)a2 direction:(unsigned long long)a3 maxRecursiveCount:(long long)a4 completionBlock:(id /* block */)a5;
- (void)recursivelyFetchMsgesWithIndexV1_V3:(long long)a0 indexV2:(long long)a1 conversation:(id)a2 direction:(unsigned long long)a3 maxRecursiveCount:(long long)a4 completionBlock:(id /* block */)a5;
- (void)recursivelyFetchMsgesWithIndexV1_V3:(long long)a0 indexV2:(long long)a1 conversation:(id)a2 direction:(unsigned long long)a3 maxRecursiveCount:(long long)a4 reason:(id)a5 completionBlock:(id /* block */)a6;
- (void)fetchMsgesWithAnchorIndexV1:(long long)a0 conversation:(id)a1 direction:(unsigned long long)a2 completionBlock:(id /* block */)a3;
- (void)fetchMsgesWithAnchorIndexV1_V2:(long long)a0 conversation:(id)a1 direction:(unsigned long long)a2 completionBlock:(id /* block */)a3;
- (void)recursiveFetchMessagesWithMinIndex:(long long)a0 maxIndex:(long long)a1 direction:(unsigned long long)a2 conversation:(id)a3 limitPage:(int)a4 completionBlock:(id /* block */)a5;
- (void)recursiveFetchMessagesWithMinIndexV2:(long long)a0 maxIndex:(long long)a1 direction:(unsigned long long)a2 conversation:(id)a3 limitPage:(int)a4 completionBlock:(id /* block */)a5;
- (BOOL)checkIfEmptyExistInMessages:(id)a0 conversationIdentifier:(id)a1 continueRanges:(id *)a2 emptyRanges:(id *)a3;
- (BOOL)checkIfEmptyExistWithContext:(id)a0;
- (id)mergeMessagesIntoRanges:(id)a0;
- (BOOL)realCheckIfEmptyExistWithContext:(id)a0;
- (id)sortMessages:(id)a0 ascending:(BOOL)a1;
- (void)__recursivelyFetchMsgesWithIndexV1_V2:(long long)a0 indexV2:(long long)a1 conversation:(id)a2 direction:(unsigned long long)a3 nextIndexV1:(long long)a4 returnMsgs:(id)a5 result:(id)a6 currentRecursiveCount:(long long)a7 hasMore:(BOOL)a8 error:(id)a9 completionBlock:(id /* block */)a10;
- (void)__recursivelyFetchMsgsWithIndexV1_V3:(long long)a0 indexV2:(long long)a1 conversation:(id)a2 reason:(id)a3 direction:(unsigned long long)a4 nextIndexV1:(long long)a5 returnVisibleMsgs:(id)a6 returnAllMsgs:(id)a7 result:(id)a8 allResult:(id)a9 currentRecursiveCount:(long long)a10 hasMore:(BOOL)a11 error:(id)a12 completionBlock:(id /* block */)a13;
- (void)fetchMsgesWithAnchorIndexV1_V3:(long long)a0 conversation:(id)a1 reason:(id)a2 direction:(unsigned long long)a3 completionBlock:(id /* block */)a4;
- (id)sortPBMessages:(id)a0 ascending:(BOOL)a1;
- (void)__recursiveFetchMessagesWithMinIndexV2:(long long)a0 maxIndex:(long long)a1 direction:(unsigned long long)a2 nextMin:(long long)a3 nextMax:(long long)a4 conversation:(id)a5 responseObject:(id)a6 error:(id)a7 currentRecursiveCount:(int)a8 completionBlock:(id /* block */)a9;
- (void)fetchMessagesWithMinIndexV2:(long long)a0 maxIndexV2:(long long)a1 direction:(unsigned long long)a2 conversation:(id)a3 completionBlock:(id /* block */)a4;
- (void)fetchMessagesWithMinIndex:(long long)a0 maxIndexV2:(long long)a1 direction:(unsigned long long)a2 conversation:(id)a3 completionBlock:(id /* block */)a4;
- (id)intergrityConversationInfoWithConversation:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
