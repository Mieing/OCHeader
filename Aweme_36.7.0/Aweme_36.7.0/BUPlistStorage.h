@class NSString, NSMutableDictionary, BUPersistenceOption, BUPersistenceLRULinkedList, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BUPlistStorage : NSObject <BUPersistenceProtocol> {
    NSObject<OS_dispatch_semaphore> *_writeSignal;
}

@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSMutableDictionary *data;
@property (nonatomic) BOOL binaryFormat;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (retain, nonatomic) BUPersistenceOption *option;
@property (retain, nonatomic) BUPersistenceLRULinkedList *linkedList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)allObjectsWithSafeBlock:(id /* block */)a0;
- (void)updateObjectsForKeys:(id)a0 WithBlock:(id /* block */)a1;
- (void)_setupDataWithPath:(id)a0 options:(id)a1 name:(id)a2;
- (void)p_save;
- (void)_setupLinkedList;
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
