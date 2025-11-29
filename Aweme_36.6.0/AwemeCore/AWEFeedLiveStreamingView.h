@class NSString;
@protocol IESLivePlayerProtocol;

@interface AWEFeedLiveStreamingView : UIView <IESLivePlayerControllerDelegate>

@property (retain, nonatomic) id<IESLivePlayerProtocol> playerController;
@property (copy, nonatomic) NSString *currentStreamingPullURL;
@property (copy, nonatomic) NSString *currentStreamData;
@property (nonatomic) BOOL isFirstLoad;
@property (nonatomic) BOOL isFinished;
@property (copy, nonatomic) id /* block */ startLiveCompletion;
@property (copy, nonatomic) id /* block */ endLiveCompletion;
@property (nonatomic) double width;
@property (nonatomic) long long streamingType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 mediaSizeDidChange:(struct CGSize { double x0; double x1; })a1;
- (void)updateStainedTrackInfo;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 player:(id)a1;
- (void)setupWithRtmpURL:(id)a0 streamData:(id)a1;
- (void)updateWithRtmpURL:(id)a0 streamData:(id)a1;
- (void)resignPlayer;
- (void)close;
- (void).cxx_destruct;
- (void)play;

@end
