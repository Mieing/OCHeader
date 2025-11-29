@class TPRecursiveLock;

@interface TPBaseReporterIdGenerator : NSObject

@property (retain, nonatomic) TPRecursiveLock *lock;
@property (nonatomic) int instanceID;

+ (id)sharedInstance;

- (id)init;
- (int)reporterInstanceBaseID;
- (void).cxx_destruct;

@end
