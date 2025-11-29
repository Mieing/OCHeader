@interface AWEPreloadVideoManager : NSObject

@property (nonatomic) BOOL isRequestingPreloadVideo;

+ (void)preloadHotSpotVideosForAwemeModel:(id)a0;
+ (id)sharedInstance;

- (id)getExpectedSizeInfo;
- (void)preloadVideoForKeyword:(id)a0 currentAweme:(id)a1 preloadCount:(long long)a2 completion:(id /* block */)a3;

@end
