@class UILabel, NSString, LOTAnimationView, MMWebImageView, MMFinderGameLiveWelfareInfoViewModel, MMFinderGameLiveWelfareTaskCollectionView;

@interface MMFinderGameLiveWelfareTaskInfoView : UIView

@property (retain, nonatomic) MMFinderGameLiveWelfareTaskCollectionView *taskListView;
@property (retain, nonatomic) MMFinderGameLiveWelfareInfoViewModel *viewModel;
@property (retain, nonatomic) LOTAnimationView *pagPacketView;
@property (retain, nonatomic) MMWebImageView *customWebImageView;
@property (nonatomic) unsigned long long currentStatus;
@property (retain, nonatomic) NSString *lastLuckBagWelfareId;
@property (retain, nonatomic) UILabel *tipLabel;
@property (copy, nonatomic) id /* block */ changeStateCompletion;
@property (copy, nonatomic) id /* block */ contentSizeDidChangeCallback;

- (id)init;
- (void)setupUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutPagPacketView;
- (void)updateGameLiveWelfareTaskInfoViewShowStatus:(unsigned long long)a0;
- (void)updateHiddenStatus:(BOOL)a0;
- (void)startCarouselTaskAnimated:(BOOL)a0;
- (void)updateData;
- (void)showLuckBagReceived;
- (void)finishLuckBagReceiveAnimation;
- (void)onClickWelfareTaskInfoView:(id)a0;
- (void)updateViewModel:(id)a0;
- (void)reportClickGameWelfare:(BOOL)a0 status:(unsigned long long)a1;
- (int)getCurrentUITypeForDataReport;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
