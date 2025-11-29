@class NSObject, NSString, BDXThreadSafeDictionary;
@protocol OS_dispatch_queue, AWESearchAIGCHistoryManagerDelegate;

@interface AWESearchAIGCHistoryManager : NSObject <AWESearchAIGCHistoryManagerProtocol>

@property (retain, nonatomic) BDXThreadSafeDictionary *conversationDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (copy, nonatomic) NSString *currentConversationId;
@property (weak, nonatomic) id<AWESearchAIGCHistoryManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)fetchHistoryWithConversationId:(id)a0 messageTimestamp:(long long)a1 getHistoryScene:(id)a2 forceFetch:(BOOL)a3 direction:(long long)a4 completion:(id /* block */)a5;
- (void)fetchHistoryWithConversationId:(id)a0 messageTimestamp:(long long)a1 getHistoryScene:(id)a2 forceFetch:(BOOL)a3 direction:(long long)a4 extra:(id)a5 completion:(id /* block */)a6;
- (void)updateConversationId:(id)a0;
- (void)requestHistoryWithConversationId:(id)a0 messageTimestamp:(long long)a1 getHistoryScene:(id)a2 direction:(long long)a3 extra:(id)a4 completion:(id /* block */)a5;
- (id)directionStringWithDirection:(long long)a0;
- (void)fetchHistoryWithConversationId:(id)a0 messageTimestamp:(long long)a1 getHistoryScene:(id)a2 forceFetch:(BOOL)a3 completion:(id /* block */)a4;
- (id)getHistoryConversationWithId:(id)a0;
- (void)requestHistoryWithConversationId:(id)a0 messageTimestamp:(long long)a1 getHistoryScene:(id)a2 direction:(long long)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;
- (void)clearMemoryCache;

@end
