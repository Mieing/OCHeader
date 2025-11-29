@class AWEStudioClipModel, AWEClipPlayerViewModel, AWEVideoSegmentedClipAdapter;

@interface AWEClipSliderViewModel : NSObject

@property (retain, nonatomic) AWEStudioClipModel *clipModel;
@property (retain, nonatomic) AWEVideoSegmentedClipAdapter *clipAdapter;
@property (retain, nonatomic) AWEClipPlayerViewModel *playerViewModel;
@property (readonly, nonatomic) double currentSpeed;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } cursorCMTimeWithPosition;
@property (readonly, nonatomic) double videoMinSeconds;
@property (readonly, nonatomic) double videoMaxSeconds;

- (double)convertVideoPlayPositionToCurrent:(double)a0;
- (double)clippedDurationWithSpeed;
- (double)passedTimeBeforeLeftMostValidClipRangeWithSpeed;
- (void)updateSegmentThumbnailWithSpeed:(double)a0 asset:(id)a1;
- (double)clippedDuration;
- (double)passedTimeBeforeLeftMostValidClipRange;
- (void)updateTotalThumbnailWithSpeed:(double)a0;
- (double)convertDynamicVideoPlayPositionToCurrent:(double)a0;
- (long long)indexForLeftMostValidClipRange;
- (double)clippedDurationWithSpeedWithBuilder:(id)a0;
- (BOOL)isClippedEmptyForAssetModel:(id)a0;
- (BOOL)playerItemIsNotTotal;
- (id)timesFromStartToEndWithSourceAsset:(id)a0 speed:(double)a1;
- (void)updateTotalThumbnailWithSpeed:(double)a0 isSegmentSpeedChanged:(BOOL)a1;
- (id)timesForTotalSegmentsForSpeedChanged:(BOOL)a0;
- (id)initWithClipModel:(id)a0 playerViewModel:(id)a1;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })clipTimeRangeAccordingVideoSliderWithAssetDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (double)convertCurrentPlaybackTimeToPosition:(double)a0;
- (double)convertCurrentPlaybackTimeToDynamicPosition:(double)a0;
- (void).cxx_destruct;

@end
