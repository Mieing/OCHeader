@class DIRSEventComparator;
@protocol IRISEventUploadExecutor;

@interface DIRSPrioritizationUnit : NSObject

@property (nonatomic) long long priority;
@property (readonly) DIRSEventComparator *comparator;
@property (weak, nonatomic) id<IRISEventUploadExecutor> executor;

- (void).cxx_destruct;
- (id)init;

@end
