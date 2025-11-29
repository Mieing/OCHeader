@class NSNumber, UIViewController, AWEAwemeModel;

@interface CMCVideoPlayerContext : CMCContext

@property (nonatomic) double currentTime;
@property (nonatomic) long long stallState;
@property (weak, nonatomic) AWEAwemeModel *curAweme;
@property (nonatomic) double currPlaybackTime;
@property (nonatomic) double currPlayableDuration;
@property (nonatomic) long long playbackAction;
@property (nonatomic) BOOL adOperationGuideShowing;
@property (nonatomic) BOOL paused;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *videoLength;
@property (weak, nonatomic) UIViewController *playerController;
@property (nonatomic) long long loopCount;

- (void).cxx_destruct;

@end
