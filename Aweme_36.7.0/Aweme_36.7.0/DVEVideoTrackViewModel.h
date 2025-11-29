@class DVETrackPanelContext;

@interface DVEVideoTrackViewModel : NSObject

@property (class, readonly, nonatomic) double videoSegmentTop;
@property (class, readonly, nonatomic) double videoSegmentBottom;
@property (class, readonly, nonatomic) double transitionItemSpace;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } transitionItemSize;
@property (class, readonly, nonatomic) double videoSegmentHeight;
@property (class, readonly, nonatomic) double audioWaveHeight;
@property (class, readonly, nonatomic) double segmentSpacing;

@property (retain, nonatomic) DVETrackPanelContext *context;
@property (readonly, nonatomic) double clipMinDuration;
@property (readonly, nonatomic) double minWidth;
@property (readonly, nonatomic) BOOL allowShowAudioWaveTrack;
@property (readonly, nonatomic) BOOL allowShowTransition;

+ (double)videoTrackHeightWithIsWave:(BOOL)a0;

- (double)contentOffsetOfSlot:(id)a0;
- (double)contentWidthOfSlot:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })coordinateForSlot:(id)a0;
- (double)rightMaxOffsetOfSlot:(id)a0;
- (double)leftMaxOffsetOfSlot:(id)a0;
- (double)spacingOfSlot:(id)a0;
- (BOOL)canAddTranstionToSlot:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)videoTrack;
- (id)slots;

@end
