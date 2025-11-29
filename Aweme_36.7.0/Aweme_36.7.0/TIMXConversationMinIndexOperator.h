@class NSString, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_queue;

@interface TIMXConversationMinIndexOperator : NSObject <TIMXConversationMinIndexProtocol, TIMXStartUpTaskProtocol, TIMXKeyValueConversationCascadeProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *conversationFetchFailedQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)a0;
+ (id)configKeyToDeleteUponConversationDeletion:(id)a0;
+ (id)configKeyToDeleteUponConversationAllMessageDeletion:(id)a0;

- (long long)minIndexV2ForConversation:(id)a0 useDefaultValue:(BOOL)a1;
- (BOOL)setLocalRealDeleteIndex:(long long)a0 forConversation:(id)a1;
- (long long)localRealDeleteIndexForConversation:(id)a0;
- (BOOL)setNeedBumpWithMinIndex:(long long)a0 forConversation:(id)a1;
- (BOOL)setNeedBumpWithMinIndex:(long long)a0 forConversation:(id)a1 forceChange:(BOOL)a2;
- (void)removeMinIndexForConversation:(id)a0;
- (long long)minIndexForConversation:(id)a0;
- (BOOL)setNeedBumpWithMinIndexV2:(long long)a0 forConversation:(id)a1;
- (BOOL)setNeedBumpWithMinIndexV2:(long long)a0 forConversation:(id)a1 forceChange:(BOOL)a2;
- (void)removeMinIndexV2ForConversation:(id)a0;
- (long long)minIndexV2ForConversation:(id)a0;
- (long long)startIndexForConversation:(id)a0;
- (BOOL)setNeedBumpWithStartIndex:(long long)a0 forConversation:(id)a1;
- (void)removeStartIndexForConversation:(id)a0;
- (BOOL)setLocalDeleteIndex:(long long)a0 forConversation:(id)a1;
- (BOOL)setLocalDeleteIndex:(long long)a0 forConversation:(id)a1 forceChange:(BOOL)a2;
- (long long)localDeleteIndexForConversation:(id)a0;
- (void)removeLocalDeleteIndex:(id)a0;
- (BOOL)setLocalRealDeleteIndex:(long long)a0 forConversation:(id)a1 forceChange:(BOOL)a2;
- (void)removeLocalRealDeleteIndex:(id)a0;
- (void)markConversationFetchFailedWithConversationID:(id)a0 shortID:(long long)a1 conversationType:(long long)a2 inbox:(int)a3 isFailed:(BOOL)a4;
- (void)clearFetchFailedConversations;
- (id)getFetchFailedConversationInfoList;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;

@end
