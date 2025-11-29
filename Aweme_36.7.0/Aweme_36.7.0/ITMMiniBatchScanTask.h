@class NSString;

@interface ITMMiniBatchScanTask : NSObject

@property (nonatomic) struct shared_ptr<ITMSDK::MiniBatchScanTask> { struct MiniBatchScanTask *__ptr_; struct __shared_weak_count *__cntrl_; } cppValue;
@property (readonly, copy, nonatomic) NSString *currentTaskID;

- (id)initWithCPPNode:(struct shared_ptr<ITMSDK::MiniBatchScanTask> { struct MiniBatchScanTask *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
