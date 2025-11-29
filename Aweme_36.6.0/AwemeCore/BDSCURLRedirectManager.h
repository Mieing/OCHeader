@class NSMutableDictionary, NSOperationQueue, BDByteScreenCastContext, NSCache;

@interface BDSCURLRedirectManager : NSObject

@property (weak, nonatomic) BDByteScreenCastContext *context;
@property (retain, nonatomic) NSCache *redirectCache;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (retain, nonatomic) NSMutableDictionary *urlStateMap;
@property (retain, nonatomic) NSMutableDictionary *urlCompletionMap;

- (void)cancelAllTask;
- (id)getCacheWithUrl:(id)a0;
- (void)preRedirectWithUrl:(id)a0;
- (void)fetchRedirectWithUrl:(id)a0 completion:(id /* block */)a1;
- (void)startRedirectWithUrl:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)clearCache;

@end
