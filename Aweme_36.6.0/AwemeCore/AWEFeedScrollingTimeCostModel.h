@interface AWEFeedScrollingTimeCostModel : NSObject

@property (nonatomic) double totalDuration;
@property (nonatomic) double pauseDuration;
@property (nonatomic) double trackPlayTimeDuration;
@property (nonatomic) double trackVideoPlayActionDuration;
@property (nonatomic) double playerDidChangePlaybackStatePauseDuration;
@property (nonatomic) double playerDidChangePlaybackStateStartDuration;
@property (nonatomic) double realPauseDuration;
@property (nonatomic) double playDuration;
@property (nonatomic) double realPlayDuration;
@property (nonatomic) double prepareToPlayDuration;
@property (nonatomic) double willDisplayDuration;
@property (nonatomic) double willDisplayCellDuration;
@property (nonatomic) double didEndDisplayingCellDuration;
@property (nonatomic) double prepareForDisplayDuration;
@property (nonatomic) double prepareForDisplayWithoutCoverImageDuration;
@property (nonatomic) double preloadCellDuration;
@property (nonatomic) double scrollViewBeginDraggingDuration;

@end
