@class NSObject, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AWESearchHybridConversationManager : NSObject

@property (retain, nonatomic) NSMutableArray *conversationList;
@property (retain, nonatomic) NSMutableDictionary *conversationSearchMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)bindConversationID:(id)a0 searchID:(id)a1;
- (id)getTopViewModelIn:(id)a0 withConversationID:(id)a1 searchID:(id)a2 scene:(long long)a3;
- (void)p_bindConversationID:(id)a0 searchID:(id)a1;
- (BOOL)p_containsConversationID:(id)a0 searchID:(id)a1;
- (void)p_removeSearchID:(id)a0;
- (void)p_removeConversationID:(id)a0;
- (BOOL)containsConversationID:(id)a0 searchID:(id)a1;
- (id)p_fetchConversationIdWithSearchID:(id)a0;
- (void)removeConversationID:(id)a0;
- (void)removeSearchID:(id)a0;
- (id)p_fetchSearchIDsWithConversationId:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearData;
- (void)p_clearData;

@end
