@class NSLock, NSMutableArray;

@interface ACCEditorConfigHolder : NSObject

@property (retain, nonatomic) NSMutableArray *objectQueue;
@property (retain, nonatomic) NSLock *lock;

+ (id)sharedHolder;

- (void)addTaskProcess:(id)a0;
- (void)removeTaskProcess:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
