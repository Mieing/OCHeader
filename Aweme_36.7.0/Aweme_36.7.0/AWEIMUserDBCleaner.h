@class NSMutableArray, AWEStorage, NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMUserDBCleaner : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) AWEStorage *configStorage;
@property (retain, nonatomic) NSMutableArray *tasks;
@property BOOL isCleaning;

+ (id)sharedInstance;
+ (void)setup;

- (void)p_setup;
- (void)p_cleanHistoryVersionFileIfNeed;
- (void)addCleanTask:(id)a0;
- (void)startTasksIfNeed;
- (void).cxx_destruct;
- (id)init;

@end
