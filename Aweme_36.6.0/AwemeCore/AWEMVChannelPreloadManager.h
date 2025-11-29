@class NSString, NSMutableSet;

@interface AWEMVChannelPreloadManager : NSObject

@property (retain, nonatomic) NSMutableSet *hasPreloadCoverItemIDs;
@property (copy, nonatomic) NSString *referString;

+ (BOOL)isEnableDash:(id)a0;
+ (void)preloadCoverWithBannerModels:(id)a0;
+ (void)preloadPlayerCover:(id)a0;

- (id)preloadSettings;
- (void)cancelPrefetchVideo;
- (id)awemeModelsForPrefetch:(id)a0 dataSource:(id)a1 key:(id)a2;
- (void)tryPrefetchVideo:(id)a0 group:(id)a1 preloadSize:(unsigned long long)a2;
- (long long)videoPreloadCount;
- (void)loopPrefetchVideo:(id)a0 dataSource:(id)a1;
- (void)tryPrefetchVideo:(id)a0 dataSource:(id)a1;
- (id)preloadCutomHeader:(id)a0;
- (void)startPrefetchVideo:(id)a0 tag:(id)a1 customHeaderDic:(id)a2 preloadSize:(unsigned long long)a3 group:(id)a4 successBlock:(id /* block */)a5 failureBlock:(id /* block */)a6 cancelBlock:(id /* block */)a7;
- (void)cancelPrefetchVideoWithGroup:(id)a0;
- (void)tryPrefetchVideo:(id)a0;
- (void)tryPrefetchSmallCardVideo:(id)a0 preloadSize:(unsigned long long)a1;
- (void)tryPrefetchLargeCardVideo:(id)a0;
- (void)preloadCoverWithModels:(id)a0;
- (void)cancelPrefetchSmallCardVideo;
- (long long)listPreloadCount;
- (unsigned long long)largeCardVideoPreloadStrategy;
- (void).cxx_destruct;

@end
