@class NSObject;
@protocol OS_dispatch_queue;

@interface RxMultipleDelegateNode : NSObject

@property (weak) id delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (void)dealloc;

@end
