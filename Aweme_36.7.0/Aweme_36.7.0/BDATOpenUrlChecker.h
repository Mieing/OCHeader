@class NSDictionary, NSMutableArray, NSRecursiveLock;

@interface BDATOpenUrlChecker : NSObject

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMutableArray *openUrlQueue;
@property (copy, nonatomic) NSDictionary *showEvents;

+ (id)sharedChecker;

- (void)removeExpirationItem;
- (void)C2S_processAlert:(id)a0;
- (void)matchingFailedWithUrl:(id)a0 matchNumber:(long long)a1;
- (void)addOpenUrlApp;
- (void)checkOpenUrlAppWithUrl:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
