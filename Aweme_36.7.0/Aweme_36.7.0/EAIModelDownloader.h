@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface EAIModelDownloader : NSObject

@property (copy, nonatomic) NSString *fileDir;
@property (retain, nonatomic) NSMutableArray *downloading;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

+ (id)getSharedDownloader:(id)a0 workQueue:(id)a1;

- (void)download:(id)a0 completionHandler:(id /* block */)a1;
- (void)download:(id)a0 urlIndex:(unsigned long long)a1 lastError:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;

@end
