@class NSString, NSPointerArray, BDPThreadSafeDictionary, NSHashTable;
@protocol BDPVideoPlayStatusDelegate;

@interface BDPVideoPreloadService : NSObject <BDPVideoPreloadProtocol>

@property (retain, nonatomic) NSHashTable *playerList;
@property (retain, nonatomic) NSPointerArray *listenerList;
@property (retain, nonatomic) BDPThreadSafeDictionary *definitionPreloadCache;
@property (nonatomic) BOOL isPlaying;
@property (weak, nonatomic) id<BDPVideoPlayStatusDelegate> videoPlayDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (void)addVideoPlayer:(id)a0;
- (void)removeVideoPlayer:(id)a0;
- (void)videoPlayerFinishPlaying;
- (void)addVideoPlayerStatusListener:(id)a0;
- (void)removeVideoPlayerStatusListener:(id)a0;
- (void)recordVideoPreloadDefinition:(id)a0 result:(id)a1 uniqueID:(id)a2;
- (id)definitionPreloadCache:(id)a0 uniqueID:(id)a1;
- (void)checkLegalPreloadCache:(id)a0;
- (void).cxx_destruct;

@end
