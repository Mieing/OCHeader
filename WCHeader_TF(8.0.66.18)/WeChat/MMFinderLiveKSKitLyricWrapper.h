@class MMFinderLiveKSKitLyricSentence, MMFinderLiveKSKitLyricSentenceView;

@interface MMFinderLiveKSKitLyricWrapper : NSObject

@property (nonatomic) BOOL prepared;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) MMFinderLiveKSKitLyricSentence *sentence;
@property (nonatomic) long long currState;
@property (retain, nonatomic) MMFinderLiveKSKitLyricSentenceView *lyricTextView;
@property (nonatomic) struct CGSize { double width; double height; } displayStateSize;
@property (nonatomic) struct CGSize { double width; double height; } prepareStateSize;
@property (nonatomic) int startTime;
@property (nonatomic) int endTime;

- (id)initWithLyricSentence:(id)a0 maxWidth:(double)a1;
- (void)prepareToDisplay:(id /* block */)a0;
- (void)startTranferPrepareStateAtPositionY:(double)a0 preferDuration:(double)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)tranferPrepareStateAtPositionYDirectly:(double)a0;
- (void)startTransferDisplayStateToPositionY:(double)a0 preferDuration:(double)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)startTranferDisappearStateWithPreferDuration:(double)a0 completion:(id /* block */)a1;
- (void)onPositionChanged:(int)a0;
- (void)transferUIToPrepareBefore;
- (void)transferUIToPrepareAfter;
- (void)transferUIToDisplay;
- (void)transferUIToDisappear;
- (void)extractLyricWordListToDisplay:(id /* block */)a0;
- (void)clearLyricWordsLabelWidth:(id)a0;
- (void)createLyricTextView:(id)a0;
- (void)updateStartTime:(int)a0 endTime:(int)a1;
- (double)prepareScaleRatio;
- (void).cxx_destruct;

@end
