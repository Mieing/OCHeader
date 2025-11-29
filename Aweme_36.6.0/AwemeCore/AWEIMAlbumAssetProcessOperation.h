@class NSString;
@protocol AWEIMAlbumAssetProcessOperationExecutor;

@interface AWEIMAlbumAssetProcessOperation : NSOperation <AWEIMAlbumAssetProcessOperationExecutorEventDelegate> {
    BOOL _finished;
    BOOL _executing;
}

@property (retain, nonatomic) id<AWEIMAlbumAssetProcessOperationExecutor> executor;
@property (nonatomic) BOOL useOrigin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithExecutor:(id)a0 useOrigin:(BOOL)a1;
- (void)markFinish;
- (void)onOperationExecutorFinish:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (BOOL)isFinished;

@end
