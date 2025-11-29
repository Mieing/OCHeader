@class NSString, NSMutableArray, TIMXSDKInstance;

@interface TIMXMessageIntegrityManagerV2 : NSObject <TIMXInstanceScopeSingleton, TIMXMessageIntegrityProtocolV2> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSMutableArray *cmdIndexs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)intergrityConversationInfoWithIdentifier:(id)a0 shortId:(long long)a1 type:(int)a2;
- (BOOL)checkIfEmptyExistInMessages:(id)a0 conversationIdentifier:(id)a1 continueRanges:(id *)a2 emptyRanges:(id *)a3;
- (BOOL)checkIfEmptyExistWithContext:(id)a0;
- (id)mergeMessagesIntoRanges:(id)a0;
- (void)recursivelyFetchMsgesWithContext:(id)a0 completionBlock:(id /* block */)a1;
- (void)recursiveFetchMessagesWithContext:(id)a0 limitPage:(int)a1 completionBlock:(id /* block */)a2;
- (BOOL)realCheckIfEmptyExistWithContext:(id)a0;
- (id)sortMessages:(id)a0 ascending:(BOOL)a1;
- (void)fetchMsgesWithAnchorIndexV1_V3:(long long)a0 conversation:(id)a1 reason:(id)a2 direction:(unsigned long long)a3 completionBlock:(id /* block */)a4;
- (id)sortPBMessages:(id)a0 ascending:(BOOL)a1;
- (void)__recursivelyFetchMsgsWithContext:(id)a0 completionBlock:(id /* block */)a1;
- (id)p_handleSingleChainMessages:(id)a0 conversationID:(id)a1 hasMore:(BOOL *)a2;
- (id)p_handleThreadMessages:(id)a0;
- (void)__recursiveFetchMessagesWithContext:(id)a0 nextMin:(long long)a1 nextMax:(long long)a2 responseObject:(id)a3 completionBlock:(id /* block */)a4;
- (void)fetchMessagesWithIndexInfo:(id)a0 direction:(unsigned long long)a1 conversation:(id)a2 completionBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
