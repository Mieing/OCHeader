@class AWELandscapePageContext, NSDictionary, NSArray, NSString;
@protocol AWEFeedPreloadManagerProtocol;

@interface AWEMediumVideoPreloadManager : NSObject <AWEFeedPreloadManagerDelegate, AWEPlayerResolutionGearTypeChangedMessage>

@property (nonatomic) BOOL bufferPreloadStarted;
@property (retain, nonatomic) AWELandscapePageContext *context;
@property (retain, nonatomic) id<AWEFeedPreloadManagerProtocol> videoPreloadManager;
@property (copy, nonatomic) NSDictionary *preloadBufferDict;
@property (copy, nonatomic) NSArray *preloadPercentArray;
@property (copy, nonatomic) id /* block */ dataSourceBlock;
@property (copy, nonatomic) id /* block */ currentPlayIndexBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cacheExistsWithModel:(id)a0 completion:(id /* block */)a1;
- (id)initWithPageContext:(id)a0;
- (void)cancelPreload;
- (void)changedGearType:(unsigned long long)a0 enterFrom:(id)a1 model:(id)a2;
- (BOOL)enableChangeProloadResolution;
- (id)preloadManagerGetDataSource:(id)a0;
- (void)checkOutPreloadStrategy;
- (void)pausePreloadStrategy;
- (void)resumePreloadStrategy;
- (void)loadMoreEndRefreshPreloadData;
- (void)preloadVideoIfNeed:(id)a0;
- (void)bufferPreloadVideoIfNeed:(id)a0;
- (void)percentPreloadVideoIfNeed:(id)a0;
- (void)startPreloadVideos:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupContext;

@end
