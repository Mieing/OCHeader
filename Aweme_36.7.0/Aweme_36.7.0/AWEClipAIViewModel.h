@class AWEStudioClipModel, NSArray, NSString, AWEAIVideoClipManager, AWEClipPlayerViewModel, AWEVideoSegmentedClipAdapter, AWEStudioClipInputData, AWEClipSliderViewModel, AWEStudioClipViewModel;
@protocol AWEStudioMusicModelProtocol;

@interface AWEClipAIViewModel : NSObject <AWEVideoRangeSliderDelegate>

@property (nonatomic) BOOL hasOverEndTime;
@property (nonatomic) unsigned long long defaultClipMode;
@property (retain, nonatomic) NSArray *defaultMusicList;
@property (retain, nonatomic) id<AWEStudioMusicModelProtocol> selectedAIVideoClipMusic;
@property (retain, nonatomic) AWEAIVideoClipManager *AIVideoClipManager;
@property (nonatomic) BOOL didUpdateMusicList;
@property (retain, nonatomic) AWEStudioClipModel *clipModel;
@property (retain, nonatomic) AWEStudioClipInputData *inputData;
@property (retain, nonatomic) AWEVideoSegmentedClipAdapter *clipAdapter;
@property (retain, nonatomic) AWEClipPlayerViewModel *playerViewModel;
@property (retain, nonatomic) AWEClipSliderViewModel *sliderViewModel;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastSnapshotTime;
@property (weak, nonatomic) AWEStudioClipViewModel *clipViewModel;
@property (readonly, nonatomic) NSString *selectedMusicId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonTrackParams;
- (BOOL)videoRangeIgnoreGesture;
- (void)videoRangeDidBeginByType:(unsigned long long)a0;
- (void)videoRangeDidEndByType:(unsigned long long)a0;
- (void)videoRangeDidChangByPosition:(double)a0 movedType:(unsigned long long)a1;
- (BOOL)shouldIgnoreRangeSliderGestureForAIVideoClipMode;
- (BOOL)isPlayingCurrentModePlayerItem;
- (BOOL)needsExpandRangeSliderForClipDuration:(double)a0;
- (double)radiansForRotateType:(unsigned long long)a0;
- (void)setAIVideoClipFooterViewEnableVideoSegmentsEdit:(BOOL)a0;
- (BOOL)AIVideoClipFooterViewEnableVideoSegmentsEdit;
- (id)initWithClipModel:(id)a0 sliderViewModel:(id)a1 playerViewModel:(id)a2;
- (void)updateAIClipMusicListIfNeeded;
- (void)configSelectedAIVideoClipMusic:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })rotateTransformForRotateType:(unsigned long long)a0;
- (void)handleAIVideoClipGenerateFailed:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maxPlayerFrameWithRotateType:(unsigned long long)a0;
- (void)trackAIVideoClipModeShow;
- (void).cxx_destruct;

@end
