@class NSMapTable, NSRecursiveLock;

@interface BDPTaskManager : NSObject

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMapTable *tasks;
@property (retain, nonatomic) NSMapTable *taskIdentifiers;

+ (id)sharedManager;

- (id)getTaskWithUniqueID:(id)a0;
- (void)addTask:(id)a0 uniqueID:(id)a1;
- (void)removeTaskWithUniqueID:(id)a0;
- (id)taskIdentifierWithUniqueID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
