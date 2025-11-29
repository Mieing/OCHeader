@class AWEDataLayerFastMap;

@interface AWEDataLayerValueDatabase : AWEDataLayerBaseDatabase {
    BOOL _useQueue;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _tempCacheLock;
    AWEDataLayerFastMap *_tempCache;
    AWEDataLayerFastMap *_deletingDomainFlags;
    BOOL _duringRemoveAllObjects;
    struct sqlite3_stmt { } *_getStatement;
    struct sqlite3_stmt { } *_setStatement;
    struct sqlite3_stmt { } *_deleteStatement;
    struct sqlite3_stmt { } *_updateLastReadStatement;
    struct sqlite3_stmt { } *_updateMaxAgeStatement;
}

+ (id)getValueDatabaseWithUserId:(id)a0;

- (void)databaseWillClose;
- (id)buildDeletingDomainsString;
- (void)handleErrorWithCode:(long long)a0 message:(id)a1;
- (BOOL)isDeletingDomain:(id)a0;
- (void)removeMetadataForKey:(id)a0 domain:(id)a1;
- (id)createTempCacheIfNeededWithDomain:(id)a0;
- (void)p_setMetadata:(id)a0 forKey:(id)a1 domain:(id)a2;
- (void)p_removeMetadataForKey:(id)a0 domain:(id)a1;
- (void)setDomain:(id)a0 isDeleting:(BOOL)a1;
- (void)p_removeMetadatasInDomain:(id)a0;
- (void)p_updateLastReadWithMetadata:(id)a0 forKey:(id)a1 domain:(id)a2;
- (id)allMetadatas;
- (id)metadataForKey:(id)a0 domain:(id)a1;
- (void)setMetadata:(id)a0 forKey:(id)a1 domain:(id)a2;
- (void)removeMetadatasInDomain:(id)a0;
- (void)removeAllMetadatas;
- (void)updateLastReadWithMetadata:(id)a0 forKey:(id)a1 domain:(id)a2;
- (void)updateMaxAge:(unsigned long long)a0 forKey:(id)a1 domain:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
