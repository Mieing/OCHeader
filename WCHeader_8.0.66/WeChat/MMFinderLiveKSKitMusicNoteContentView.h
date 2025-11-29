@class UIColor, NSMutableArray;

@interface MMFinderLiveKSKitMusicNoteContentView : UIView

@property (nonatomic) BOOL isStart;
@property (nonatomic) double afterWardContentOffset;
@property (nonatomic) double afterWardTimeOffset;
@property (nonatomic) double advanceContentOffset;
@property (nonatomic) double displayAdvanceTimeOffset;
@property (nonatomic) double prepareAdvanceTimeOffset;
@property (nonatomic) int currKalaPostion;
@property (retain, nonatomic) NSMutableArray *displayingSegmentList;
@property (retain, nonatomic) NSMutableArray *pendingSegmentList;
@property (copy, nonatomic) id /* block */ noteContentGetNextBatchListCallback;
@property (retain, nonatomic) UIColor *notesColor;

- (id)init;
- (void)initDefaultDatas;
- (void)layoutSubviews;
- (void)updateAfterWardContentOffset:(double)a0;
- (void)updateAfterWardTimeOffset;
- (void)updateAdvanceContentOffset:(double)a0;
- (void)start;
- (void)stop;
- (void)onKSKitKalaPositionChanged:(int)a0;
- (void)onNotifyTimeToPrepareNextBatchMusicNotes;
- (void)checkIsTimeToDisplayNextSegment;
- (BOOL)isCurrLastSegmentDisplayCompletely;
- (void)monitorLastSegmentDisplayCompletely;
- (void)startDisplaySegment:(id)a0;
- (void)onSegmentMoveCompletely:(id)a0;
- (void)checkDisOfKalaPositionAndSegmentDisplay:(id)a0;
- (void)updateDisplayAdvanceTimeOffset;
- (void)updatePrepareAdvanceTimeOffset;
- (void)preparePendingSegment;
- (id)createMusicNoteSegmentView;
- (id)getNextBatchMusicNoteList;
- (void)clearDatas;
- (void).cxx_destruct;

@end
