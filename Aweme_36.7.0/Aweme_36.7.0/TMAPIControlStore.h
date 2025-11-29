@class NSMutableDictionary;

@interface TMAPIControlStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *storage;

- (id)tm_fetchContext;
- (void)tm_saveResult:(id)a0;
- (id)tm_fetchTaskRecords;
- (id)tm_fetchResult;
- (id)fetchObjectWithKey:(id)a0;
- (void)saveObject:(id)a0 withKey:(id)a1;
- (void)tm_saveStack:(id)a0;
- (void)tm_saveContext:(id)a0;
- (void)tm_saveContext:(id)a0 withTaskIdentity:(id)a1;
- (id)tm_fetchStack;
- (void)tm_addTaskRecord:(id)a0;
- (void).cxx_destruct;
- (void)cleanup;
- (id)init;
- (void)setup;

@end
