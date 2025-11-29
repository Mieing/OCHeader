@protocol BDPAppPreloadCacheDataSource;

@interface BDPPreloadResourceTask : NSObject

@property (retain, nonatomic) id<BDPAppPreloadCacheDataSource> dataSource;
@property (copy, nonatomic) id /* block */ furtherTaskBlk;
@property (copy, nonatomic) id /* block */ currentTaskBlk;
@property (retain) id preloadObject;
@property (nonatomic) BOOL running;
@property (nonatomic) BOOL needLinearPreload;
@property BOOL needClearObjWhenFinish;

- (void)tryPerformBlk:(id /* block */)a0;
- (void)preloadTaskFinished;
- (BOOL)allPreloadFinished;
- (void).cxx_destruct;

@end
