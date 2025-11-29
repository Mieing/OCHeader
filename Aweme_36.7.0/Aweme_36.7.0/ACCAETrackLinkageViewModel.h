@class ACCToolsPerformanceTracker, NSNumber, NSString;
@protocol AWEEditKit, AEKMegaEditor, ACCAdvanceEditViewModelProtocol, IESServiceProvider, ACCEditVideoFilterApplyServiceProtocol, ACCAEDraftService, AEKMegaData;

@interface ACCAETrackLinkageViewModel : NSObject <ACCAETrackLinkageServiceProtocol>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> editViewModel;
@property (weak, nonatomic) id<ACCEditVideoFilterApplyServiceProtocol> filterApplyService;
@property (weak, nonatomic) id<ACCAEDraftService> draftService;
@property (weak, nonatomic) ACCToolsPerformanceTracker *tracker;
@property (weak, nonatomic) id<AWEEditKit> editKit;
@property (retain, nonatomic) id<AEKMegaData> oldMegaEditor;
@property (retain, nonatomic) NSNumber *timeThresholdForReshootNum;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } newTotalDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } oldTotalDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commonTrackLinkageWithModel:(id)a0 fromModel:(id)a1;
- (void)clipTrackTimeRangeWithModel:(id)a0 fromModel:(id)a1;
- (void)videoTimeRangeChangeDidCancelWithModel:(id)a0 fromModel:(id)a1;
- (void)replaceVideoClipWithModel:(id)a0 fromModel:(id)a1;
- (id)buildWithMainTrackChanges:(id)a0 oldVideoOperator:(id)a1;
- (long long)updateFilterForAllVideoClipWithMainTrackDiff:(id)a0 mainTrackChangeMap:(id)a1;
- (id)buildAuxiliaryTrack;
- (BOOL)updateTimeRangeWithStickerModel:(id)a0 trackLinkageModels:(id)a1;
- (long long)updateOtherEditElementsWithModel:(id)a0;
- (BOOL)isGreaterEqualEndTimeWithTime1:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 time2:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)updateWithSticker:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (id)buildWithMainTrackChanges:(id)a0 oldVideoOperator:(id)a1 isReplace:(BOOL)a2;
- (id)buildLinkageModelWithCurrClipData:(id)a0 oldVideoOperator:(id)a1 isReplace:(BOOL)a2;
- (void)logWithType:(id)a0 identifier:(id)a1 currTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 oldTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRangeWithStickerRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 linkageModel:(id)a1 stickerModel:(id)a2;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRangeForTrimWithStickerRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 linkageModel:(id)a1;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithServiceProvider:(id)a0;

@end
