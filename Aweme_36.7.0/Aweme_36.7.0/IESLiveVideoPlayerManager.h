@class NSHashTable;

@interface IESLiveVideoPlayerManager : NSObject

@property (retain, nonatomic) NSHashTable *videoPlayerTable;
@property (nonatomic) BOOL enableEyesProtect;
@property (nonatomic) double eyesProtectFilterValue;
@property (copy, nonatomic) id /* block */ eyesProtectLutImageBlock;

+ (id)sharedInstance;

- (void)updateLivePlayersEyesProtectState:(BOOL)a0 intensityValue:(double)a1;
- (id)createVideoPlayer;
- (void)p_appendManagerPlayer:(id)a0;
- (id)createVideoWithVideoId:(id)a0;
- (void).cxx_destruct;

@end
