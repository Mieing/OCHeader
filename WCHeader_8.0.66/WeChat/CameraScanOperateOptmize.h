@class NSObject;
@protocol OS_dispatch_queue, CameraScanOperateOptmizeDelegate;

@interface CameraScanOperateOptmize : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calcuteQueue;
@property BOOL hasTaskRunning;
@property (weak, nonatomic) id<CameraScanOperateOptmizeDelegate> delegate;

- (id)init;
- (void)activeFocus:(struct QBarSnapshot { int x0; int x1; struct vector<QBarSnapshot::Target, std::allocator<QBarSnapshot::Target>> { struct Target *x0; struct Target *x1; struct __compressed_pair<QBarSnapshot::Target *, std::allocator<QBarSnapshot::Target>> { struct Target *x0; } x2; } x2; })a0;
- (void)runASyncOnCalcQueue:(id /* block */)a0;
- (void).cxx_destruct;

@end
