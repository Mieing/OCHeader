@class NSObject;
@protocol OS_dispatch_queue;

@interface TencentLBSInnerLogHandler : NSObject

@property (copy, nonatomic) id /* block */ logPrintBlock;
@property BOOL isSetLogBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;

+ (id)sharedInstance;

- (id)init;
- (void)tencentSetLogBlock:(id /* block */)a0;
- (void)tencentReSetLogBlock;
- (void)tencentLbsPrintLogWith:(id)a0 withString:(id)a1;
- (void).cxx_destruct;

@end
