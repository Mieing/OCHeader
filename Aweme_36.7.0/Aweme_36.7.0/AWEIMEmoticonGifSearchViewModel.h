@interface AWEIMEmoticonGifSearchViewModel : NSObject

+ (void)clearSearchResult;
+ (id)processStickModel:(id)a0 error:(id)a1;
+ (id)changeResponseToEmotionModel:(id)a0 logID:(id)a1;
+ (id)requestWithSearchString:(id)a0 index:(long long)a1 conversationID:(id)a2 searchKeyID:(id)a3 source:(id)a4 offset:(long long)a5 completion:(id /* block */)a6;
+ (id)requestEmoticonByRecInterfaceWithOffset:(long long)a0 completion:(id /* block */)a1;
+ (id)currentSearchResult;
+ (void)saveSearchResult:(id)a0;

@end
