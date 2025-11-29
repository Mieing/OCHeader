@interface WCTDatabase : WCTInterface {
    void *_database;
}

+ (id)DefaultBasicConfigName;
+ (id)DefaultCipherConfigName;
+ (id)DefaultTraceConfigName;
+ (id)DefaultCheckpointConfigName;
+ (id)DefaultSynchronousConfigName;
+ (id)DefaultTokenizeConfigName;
+ (void)setDefaultFullfsync:(BOOL)a0;
+ (void)setDefaultCheckPointFullfsync:(BOOL)a0;
+ (void)PurgeFreeHandlesInAllDatabases;
+ (void)registerNotificationABImpl;
+ (void)initialize;

- (BOOL)runTransaction:(id /* block */)a0;
- (void)setConfig:(struct function<bool (std::shared_ptr<WCDB::Handle> &, WCDB::Error &)> { struct __value_func<bool (std::shared_ptr<WCDB::Handle> &, WCDB::Error &)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a0 forName:(id)a1 withOrder:(int)a2;
- (void)setConfig:(struct function<bool (std::shared_ptr<WCDB::Handle> &, WCDB::Error &)> { struct __value_func<bool (std::shared_ptr<WCDB::Handle> &, WCDB::Error &)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a0 forName:(id)a1;
- (void)setSynchronousFull:(BOOL)a0;
- (void)trackDBInitWithBeginTime:(unsigned long long)a0;
- (double)p_fileSizeWithPath:(id)a0;
- (id)initWithExistingTag:(int)a0;
- (void)setCipherKey:(id)a0;
- (void)setCipherKey:(id)a0 andCipherPageSize:(int)a1;
- (BOOL)canOpen;
- (BOOL)canOpenWithError:(id *)a0;
- (void)blockade;
- (void)unblockade;
- (void)purgeFreeHandles;
- (BOOL)isBlockaded;
- (void)setTokenizers:(id)a0;
- (BOOL)removeFilesWithError:(id *)a0;
- (BOOL)moveFilesToDirectory:(id)a0 withExtraFiles:(id)a1 andError:(id *)a2;
- (BOOL)moveFilesToDirectory:(id)a0 withError:(id *)a1;
- (id)getPaths;
- (unsigned long long)getFilesSizeWithError:(id *)a0;
- (void)setPerformanceTrace:(id /* block */)a0;
- (BOOL)createTableAndIndexesOfName:(id)a0 withClass:(Class)a1;
- (BOOL)createVirtualTableOfName:(id)a0 withClass:(Class)a1;
- (BOOL)createTableOfName:(id)a0 withColumnDefList:(const void *)a1;
- (BOOL)createTableOfName:(id)a0 withColumnDefList:(const void *)a1 andConstraintList:(const void *)a2;
- (BOOL)isTableExists:(id)a0;
- (BOOL)dropTableOfName:(id)a0;
- (BOOL)createIndexOfName:(id)a0 withIndexList:(const void *)a1 forTable:(id)a2;
- (BOOL)dropIndexOfName:(id)a0;
- (BOOL)addColumn:(const void *)a0 forTable:(id)a1;
- (id)getTransaction;
- (BOOL)runTransaction:(id /* block */)a0 event:(id /* block */)a1;
- (id)prepareMultiSelectObjectsOfClass:(Class)a0 fromTable:(id)a1;
- (id)prepareMultiSelectObjectsOnResults:(const struct WCTResultList { } *)a0 fromTable:(id)a1;
- (BOOL)studio_recoverFromPath:(id)a0 withPageSize:(int)a1 backupCipher:(id)a2 databaseCipher:(id)a3 error:(id *)a4;
- (void)close;
- (BOOL)commitTransaction;
- (id)initWithPath:(id)a0;
- (BOOL)isOpened;
- (void)setTag:(int)a0;
- (BOOL)beginTransaction;
- (void)close:(id /* block */)a0;
- (BOOL)rollbackTransaction;
- (void)setTokenizer:(id)a0;

@end
