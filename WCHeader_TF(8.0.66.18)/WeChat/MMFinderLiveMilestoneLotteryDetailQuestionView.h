@class MMUIButton, MMFinderLiveMilestoneLotteryDetailQuestionOptionView, NSString, MMFinderLiveMilestoneLotteryViewModel, UILabel, UIView, UIScrollView;

@interface MMFinderLiveMilestoneLotteryDetailQuestionView : MMFinderLiveMilestoneLotteryDetailSecondaryView <MMFinderLiveMilestoneLotteryViewModelExt>

@property (retain, nonatomic) MMFinderLiveMilestoneLotteryViewModel *vm;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *questionLabel;
@property (retain, nonatomic) UIView *optionContainerView;
@property (retain, nonatomic) UIScrollView *optionScrollView;
@property (retain, nonatomic) UILabel *countdownLabel;
@property (retain, nonatomic) MMUIButton *submitButton;
@property (weak, nonatomic) MMFinderLiveMilestoneLotteryDetailQuestionOptionView *lastSelectedOptionView;
@property (retain, nonatomic) NSString *lotteryId;
@property (copy, nonatomic) id /* block */ onSubmitAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0 lotteryId:(id)a1;
- (void)updateCountdownString:(id)a0;
- (id)currentQuestionInfo;
- (void)didAppear;
- (void)layoutSubviews;
- (void)layoutCountdownLabel;
- (void)initUI;
- (id)backButtonColor;
- (void)layoutGradientMask;
- (void)rebuildOptionViews;
- (void)reloadSubmitButton;
- (void)onOngoingMilestoneLotteryInfoChanged:(id)a0 prevInfo:(id)a1;
- (void)onOngoingMilestoneLotteryInfoUpdated:(id)a0;
- (void)onOngoingLotteryCountdown:(id)a0 remainingSeconds:(unsigned int)a1;
- (BOOL)hasAttendLottery;
- (BOOL)isCurrentLotteryStillRunning;
- (void)updateSubmitButtonEnableState;
- (void)reloadUIForLotteryUpdate;
- (void)onSubmitButtonTapped;
- (void).cxx_destruct;

@end
