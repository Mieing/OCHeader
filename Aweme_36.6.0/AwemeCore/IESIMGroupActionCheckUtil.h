@interface IESIMGroupActionCheckUtil : NSObject <IESIMGroupActionCheckUtil> {
    void /* unknown type, empty encoding */ multiCheckCache;
    void /* unknown type, empty encoding */ cacheExpireMap;
    void /* unknown type, empty encoding */ onRequestCacheKey;
    void /* unknown type, empty encoding */ pendingCheckHandler;
}

- (id)checkAction:(long long)a0 source:(long long)a1 conversationID:(id)a2 otherParams:(id)a3 bizExt:(id)a4;
- (void)cacheMultiActionCheck:(id)a0 source:(long long)a1 conversationID:(id)a2 cacheConfig:(id)a3 completion:(id /* block */)a4;
- (void)checkAction:(long long)a0 source:(long long)a1 conversationID:(id)a2 cacheKey:(id)a3 shouldFallback:(BOOL)a4 completion:(id /* block */)a5;
- (void)clearCacheWithKey:(id)a0;
- (BOOL)showPromptWithPromptInfo:(id)a0 promptsResult:(id /* block */)a1;
- (BOOL)showPromptWithPromptInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
