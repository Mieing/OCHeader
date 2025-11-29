@class NSString, BUPersistenceOption, NSMutableDictionary, BUPersistenceLRULinkedList, NSLock;

@interface BUMMAPStorage : NSObject <BUPersistenceProtocol> {
    int p_fd;
    void *p_ptr;
    BOOL p_mmap_success;
}

@property (retain, nonatomic) NSLock *lock;
@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) BUPersistenceOption *option;
@property (retain, nonatomic) NSMutableDictionary *data;
@property (nonatomic) unsigned long long dataLength;
@property (retain, nonatomic) BUPersistenceLRULinkedList *linkedList;
@property (nonatomic) unsigned long long totalIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupDataWithPath:(id)a0 options:(id)a1 name:(id)a2;
- (void)mmapFile;
- (void)p_setupLinkedList;
- (unsigned long long)getDataLength:(id)a0;
- (void)allObjectsWithSafeBlock:(id /* block */)a0;
- (void)updateObjectsForKeys:(id)a0 WithBlock:(id /* block */)a1;
- (id)initWithPath:(id)a0 name:(id)a1 options:(id)a2;
- (BOOL)removeObjectsForKeys:(id)a0;
- (id)objectsForKeys:(id)a0;
- (void).cxx_destruct;
- (BOOL)removeAll;
- (id)objectForKey:(id)a0;
- (BOOL)save;
- (id)allObjects;
- (BOOL)setObject:(id)a0 forKey:(id)a1;
- (BOOL)hasObjectForKey:(id)a0;

@end
