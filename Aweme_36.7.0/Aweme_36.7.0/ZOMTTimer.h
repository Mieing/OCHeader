@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface ZOMTTimer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *zoautimer;
@property (nonatomic) double zoautimeout;
@property (copy, nonatomic) id /* block */ zoaucompletion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *zoauqueue;

- (id)initWithTimeout:(double)a0 repeat:(BOOL)a1 completion:(id /* block */)a2 queue:(id)a3;
- (void).cxx_destruct;
- (void)invalidate;
- (void)start;
- (void)dealloc;

@end
