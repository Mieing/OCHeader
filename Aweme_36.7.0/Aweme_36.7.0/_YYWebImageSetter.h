@class NSURL, NSOperation, NSObject;
@protocol OS_dispatch_semaphore;

@interface _YYWebImageSetter : NSObject {
    NSObject<OS_dispatch_semaphore> *_lock;
    NSURL *_imageURL;
    NSOperation *_operation;
}

@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) int sentinel;

+ (id)setterQueue;

- (int)cancelWithNewURL:(id)a0;
- (int)setOperationWithSentinel:(int)a0 url:(id)a1 options:(unsigned long long)a2 manager:(id)a3 progress:(id /* block */)a4 transform:(id /* block */)a5 completion:(id /* block */)a6;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (int)cancel;

@end
