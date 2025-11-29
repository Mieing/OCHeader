@class NSObject, NSMutableArray, TXCDispatchQueue;
@protocol OS_dispatch_source, TXCTimedOutputDelegate;

@interface TXCTimedOutput : NSObject

@property (readonly, nonatomic) NSMutableArray *buffer;
@property (readonly, weak, nonatomic) id<TXCTimedOutputDelegate> delegate;
@property (readonly, nonatomic) TXCDispatchQueue *queue;
@property (readonly, nonatomic) long long cacheSize;
@property (readonly, nonatomic) BOOL keepsLastObject;
@property (nonatomic) BOOL isLastObjectOutput;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) double interval;

- (id)initWithDelegate:(id)a0 inQueue:(id)a1 interval:(double)a2 cacheSize:(long long)a3 keepsLastObject:(BOOL)a4;
- (void)start;
- (void)stop;
- (void)pushObject:(id)a0;
- (void)outputObject;
- (void).cxx_destruct;

@end
