@class NSString, BDARVSDKVideoService, NSDictionary, UIView, BDSHVideoModel, BDARVPayloadData;
@protocol BDSHVideoStatusDelegate, BDARVSheoBridgeContext;

@interface BDARVSheoUIVideo : UIView <BDSHVideoProtocol, BDASDKVideoPlayerDelegate>

@property (weak, nonatomic) id<BDSHVideoStatusDelegate> delegate;
@property (retain, nonatomic) BDARVSDKVideoService *videoService;
@property (retain, nonatomic) BDSHVideoModel *videoModel;
@property (nonatomic) BOOL autoplay;
@property (weak, nonatomic) id<BDARVSheoBridgeContext> context;
@property (retain, nonatomic) UIView *videoView;
@property (retain, nonatomic) BDARVPayloadData *payloadData;
@property (readonly, nonatomic) double bdarDuration;
@property (readonly, nonatomic) double bdarTotalWatchTime;
@property (readonly, nonatomic) unsigned long long playDurationStatus;
@property (readonly, copy, nonatomic) NSDictionary *playerStatusInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getInstanceWithContext:(id)a0 videoModel:(id)a1;

- (void)videoPlayerDidFinished:(id)a0 error:(id)a1;
- (void)videoPlayer:(id)a0 playbackTime:(double)a1;
- (void)videoPlayer:(id)a0 playbackStateDidChanged:(long long)a1;
- (void)videoPlayerReadyToDisPlay:(id)a0 params:(id)a1;
- (void)videoPlayerReadyToPlay:(id)a0;
- (BOOL)configPlayerWithVideoInfo:(id)a0;
- (id)getVideoView;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)setMuted:(BOOL)a0;
- (id)initWithContext:(id)a0;
- (void)stop;
- (void)destroy;
- (void)setLoop:(BOOL)a0;

@end
