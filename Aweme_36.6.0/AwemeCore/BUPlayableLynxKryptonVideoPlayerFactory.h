@class NSDictionary, NSArray, NSString;

@interface BUPlayableLynxKryptonVideoPlayerFactory : NSObject <KryptonVideoPlayerService>

@property (copy, nonatomic) NSDictionary *videoModelMap;
@property (copy, nonatomic) NSArray *resources;
@property (nonatomic) BOOL fixiOS18VideoNoPicture;
@property (nonatomic) BOOL fixNoAudioClockVideo;
@property (copy, nonatomic) NSDictionary *commonTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preloadResources:(id)a0 trackParams:(id)a1;
+ (void)updateLogPanel:(id)a0;
+ (void)trackWithEvent:(id)a0 urlStr:(id)a1 params:(id)a2 type:(long long)a3;

- (void)playableVideoPreloadTaskAddWithParams:(id)a0;
- (void)playableVideoPreloadTaskCancelWithParams:(id)a0;
- (id)initWithVideoModelMap:(id)a0;
- (id)createVideoPlayerWithOptions:(id)a0;
- (void)configVideoModel;
- (id)videoModelFromString:(id)a0;
- (void).cxx_destruct;

@end
