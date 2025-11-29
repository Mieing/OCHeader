@class NSString, NSFileHandle;
@protocol IESECStorageFileResourceMetric;

@interface IESECDiskLRUCache : NSObject {
    NSString *_directory;
    NSString *_cacheVersion;
    id<IESECStorageFileResourceMetric> _resourceMetric;
    NSString *_journalFilePath;
    NSString *_journalBackupFilePath;
    NSFileHandle *_journalFileHandle;
    struct unique_ptr<(anonymous namespace)::Storage, std::default_delete<(anonymous namespace)::Storage>> { struct Storage *__ptr_; } _storage_ptr;
    long long _redundantOpCount;
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _mutex;
}

@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) long long maxSize;

+ (id)cacheWithDirectory:(id)a0 maxSize:(long long)a1;

- (void)putData:(id)a0 forKey:(id)a1;
- (id)initWithDirectory:(id)a0 maxSize:(long long)a1;
- (void)writeJournalFileWithData:(id)a0 error:(out id *)a1;
- (BOOL)initializeCache;
- (BOOL)recoverOrCreateJournalLockedForceRecreation:(BOOL)a0;
- (unsigned long long)readJournal;
- (BOOL)rebuildJournalLocked;
- (void)openJournalFileHandleLocked;
- (BOOL)readJournalLine:(id)a0;
- (id)dataForKey:(id)a0;
- (BOOL)containsKey:(id)a0;
- (void).cxx_destruct;
- (void)enumerateKeysUsingBlock:(id /* block */)a0;
- (id).cxx_construct;
- (BOOL)removeDataForKey:(id)a0;

@end
