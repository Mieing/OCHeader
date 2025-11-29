@class AWESearchLiveAssistLabel, NSTimer, UIImageView, AWESearchEcommerceAdGoodsView, UIView, AWEAdTagView, AWESearchLiveOnlyStatusView;
@protocol AWEAdLearnMoreLynxButton;

@interface AWEGeneralSearchAdCombinateLiveCellController : AWEGeneralSearchCombinateLiveCellController

@property (retain, nonatomic) AWESearchEcommerceAdGoodsView *adGoodsView;
@property (nonatomic) double startPlayerTime;
@property (retain, nonatomic) UIImageView *spotImageView;
@property (retain, nonatomic) UIView<AWEAdLearnMoreLynxButton> *adLearnMoreLynxButton;
@property (retain, nonatomic) AWEAdTagView *adTagView;
@property (nonatomic) BOOL lynxButtonLoadFail;
@property (retain, nonatomic) AWESearchLiveOnlyStatusView *statusView;
@property (retain, nonatomic) AWESearchLiveAssistLabel *assistView;
@property (copy, nonatomic) id /* block */ playbackTimeBlock;
@property (retain, nonatomic) NSTimer *playbackTimeTimer;
@property (nonatomic) double playbackTime;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (void)__awe__codeRunnerRun___LINE__;

- (id)adExtraData;
- (BOOL)shouldShowAdLearnMoreLynxButton:(id)a0;
- (void)trackPlay;
- (void)didEndShowing;
- (void)didStartShowing;
- (void)didBecomeActiveForReason:(unsigned long long)a0;
- (id)searchTrackParams;
- (void)setUpLearnMoreLynxButtonWithModel:(id)a0;
- (id)appendLynxRawAdDataWithSearchCommonParams:(id)a0;
- (void)registerCallback:(id /* block */)a0 forReachingPlaybackTime:(double)a1;
- (void)updateLiveLabel;
- (void)stopPlaybackTimeTimer;
- (void)resetAdComponentWithModelIfNeeded:(id)a0;
- (void)showAdLiveLynxButtonWithModel:(id)a0;
- (void)trackSearchResultShowForLive;
- (id)getGeneralSearchTrackBaseParams;
- (void)startPlaybackTimeTimer;
- (void)clickGoodAtIndex:(long long)a0;
- (void)trackClickWithRefer:(id)a0;
- (void)clickLiveView;
- (void)onTimerAction;
- (void)clickGoods;
- (void)clickGoodsMore;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
