@class NSThread, NSURLSessionDataTask, NSArray;
@protocol NSURLSessionDataDelegate;

@interface BDWebURLSessionDemuxTaskInfo : NSObject

@property (retain) id<NSURLSessionDataDelegate> delegate;
@property (retain) NSThread *thread;
@property (readonly) NSURLSessionDataTask *task;
@property (readonly, copy) NSArray *modes;

- (void)performBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)performBlockOnClientThread:(id /* block */)a0;
- (id)initWithTask:(id)a0 delegate:(id)a1 modes:(id)a2;

@end
