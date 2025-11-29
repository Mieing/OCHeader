@class UIView, MMWebImageView, NSString, UIButton, MMFinderLiveMilestoneLotteryCouponInfo, MMFinderLiveMilestoneLotteryViewModel, MMUIButton, UILabel;

@interface MMFinderLiveMilestoneLotteryDetailAttendView : MMFinderLiveMilestoneLotteryDetailSecondaryView <MMFinderLiveMilestoneLotteryViewModelExt, MMWebImageViewDelegate>

@property (retain, nonatomic) MMFinderLiveMilestoneLotteryViewModel *vm;
@property (retain, nonatomic) MMFinderLiveMilestoneLotteryCouponInfo *couponInfo;
@property (retain, nonatomic) NSString *lotteryId;
@property (retain, nonatomic) MMUIButton *attendButton;
@property (retain, nonatomic) MMUIButton *awardDetailButton;
@property (retain, nonatomic) UILabel *awardLabel;
@property (retain, nonatomic) MMWebImageView *awardImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *countdownLabel;
@property (retain, nonatomic) UIView *followTopLineView;
@property (retain, nonatomic) UIView *followBottomLineView;
@property (retain, nonatomic) MMWebImageView *followAccountImageView;
@property (retain, nonatomic) UILabel *followAccountNameLabel;
@property (retain, nonatomic) UILabel *followAccountDescLabel;
@property (retain, nonatomic) MMWebImageView *followAccountIconImageView;
@property (nonatomic) BOOL accountAlreadyFollowed;
@property (retain, nonatomic) UIButton *accountProfileButton;
@property (nonatomic) unsigned long long countdownSeconds;
@property (nonatomic) struct CGSize { double width; double height; } lastLayoutSize;
@property (copy, nonatomic) id /* block */ onAttendAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0 lotteryId:(id)a1;
- (void)onOngoingMilestoneLotteryInfoUpdated:(id)a0;
- (void)onOngoingLotteryCountdown:(id)a0 remainingSeconds:(unsigned int)a1;
- (void)onOngoingMilestoneLotteryInfoChanged:(id)a0 prevInfo:(id)a1;
- (void)layoutSubviews;
- (void)layoutAttendButton;
- (void)layoutCountdownLabel;
- (id)curLotteryInfo;
- (void)initUI;
- (id)backButtonColor;
- (id)makeLineView;
- (double)getAwardImageLen;
- (BOOL)isAttendTypeFollow;
- (void)reloadDescLabel;
- (void)reloadFollowAccountDescLabel;
- (void)reloadAttendButtonState;
- (void)refreshFollowStateIfNeeded;
- (void)updateCountdownLabel;
- (void)updateCountdownLabelWithAnimation:(BOOL)a0;
- (void)onAttendButtonTapped;
- (void)onAwardDetailButtonClicked;
- (void)onTapAccountProfile;
- (void)onLoadImageOK:(id)a0;
- (id)audienceLogReporter;
- (void).cxx_destruct;

@end
