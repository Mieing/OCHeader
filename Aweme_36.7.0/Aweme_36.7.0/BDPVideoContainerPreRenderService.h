@class BDPVideoContainer, NSString, BDPThreadSafeDictionary;

@interface BDPVideoContainerPreRenderService : NSObject <BDPVideoContainerPreRenderService, BDPWarmBootMessage, GenerateFileKeyDelegate>

@property (retain, nonatomic) BDPVideoContainer *container;
@property (nonatomic) long long missCount;
@property (retain, nonatomic) BDPThreadSafeDictionary *eventMaps;
@property (retain, nonatomic) BDPThreadSafeDictionary *playbackListEventMaps;
@property (retain, nonatomic) BDPThreadSafeDictionary *itemChangeListEventMaps;
@property (retain, nonatomic) BDPThreadSafeDictionary *containerMaps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)generateFileKey:(id)a0 hlsFileKey:(id)a1 infos:(id)a2;
- (id)initService;
- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (void)enqueuePreRenderVideo:(id)a0 uniqueID:(id)a1;
- (id)preRenderVideoContainerWithModel:(id)a0 uniqueID:(id)a1;
- (void)setVideoEventReady:(id)a0 player:(id)a1 uniqueID:(id)a2;
- (void)videoRemoved:(id)a0 uniqueID:(id)a1;
- (void)republishEventIfNeed:(id)a0 componentID:(id)a1 uniqueID:(id)a2;
- (void)clearVideoCacheWithUniqueID:(id)a0;
- (BOOL)canPublishEvent:(long long)a0 componentID:(id)a1 uniqueID:(id)a2;
- (void)setUpDelegate;
- (BOOL)hitPreRender:(long long)a0;
- (long long)_JSBBindType:(id)a0 originType:(long long)a1;
- (void).cxx_destruct;

@end
