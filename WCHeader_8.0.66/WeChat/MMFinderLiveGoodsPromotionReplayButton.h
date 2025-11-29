@class MMFinderLiveTaskId, MMUIActivityIndicatorView, UIImageView, MMUIView, FinderWindowProductInfo_ProductReplayInfo, MMTimerLabel, MMUILabel;

@interface MMFinderLiveGoodsPromotionReplayButton : MMUIButton

@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) MMUILabel *actionTextLabel;
@property (retain, nonatomic) MMTimerLabel *timerLabel;
@property (retain, nonatomic) MMUIView *dotTipsView;
@property (nonatomic) long long currentState;
@property (retain, nonatomic) FinderWindowProductInfo_ProductReplayInfo *replayInfo;
@property (retain, nonatomic) MMFinderLiveTaskId *taskID;
@property (copy, nonatomic) id /* block */ replayButtonDidClickedBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void)useSubViews:(id)a0;
- (void)updateUIWithReplayRecordState:(long long)a0;
- (void)updateWithGoodsViewModel:(id)a0;
- (void)updateWithReplayInfo:(id)a0 taskID:(id)a1;
- (void)startTimer;
- (void)stopTimer;
- (void)updateTimeLabel:(unsigned int)a0;
- (void)onTapInside:(id)a0;
- (void).cxx_destruct;

@end
