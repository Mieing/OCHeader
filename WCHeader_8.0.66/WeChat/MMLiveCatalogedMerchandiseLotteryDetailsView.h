@class UIView, NSString, UIImageView, UIButton, MMFinderLiveTaskId, RichTextView, MMLiveCatalogedMerchandiseLotteryInfo, UILabel, MMLiveMulticastTimerToken;
@protocol MMLiveCatalogedMerchandiseLotteryDetailsViewDelegate;

@interface MMLiveCatalogedMerchandiseLotteryDetailsView : UIView <ILinkEventExt, MMLiveMulticastTimerSubscriber>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *questDetailsContainerView;
@property (retain, nonatomic) UIImageView *thumbnailView;
@property (retain, nonatomic) UIView *detailsIndicatorView;
@property (retain, nonatomic) UILabel *detailsIndicatorLabel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *countdownLabel;
@property (retain, nonatomic) UIButton *primaryButton;
@property (retain, nonatomic) UILabel *participatedLabel;
@property (retain, nonatomic) RichTextView *disclaimerLabel;
@property (retain, nonatomic) UIView *drawingDetailsContainerView;
@property (retain, nonatomic) UILabel *drawingLiveRoomLabel;
@property (retain, nonatomic) UILabel *drawingLabel;
@property (retain, nonatomic) UIView *drawingDetailsView;
@property (retain, nonatomic) UILabel *drawingDetailsLabel;
@property (retain, nonatomic) UIImageView *drawingDetailsRightChevronView;
@property (retain, nonatomic) MMLiveCatalogedMerchandiseLotteryInfo *lotteryInfo;
@property (retain, nonatomic) MMLiveMulticastTimerToken *timerToken;
@property (weak, nonatomic) id<MMLiveCatalogedMerchandiseLotteryDetailsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 taskId:(id)a1;
- (id)initWithTaskId:(id)a0;
- (void)layoutSubviews;
- (void)onMerchandiseDetailsTapped;
- (void)onPrimaryButtonTapped;
- (void)onUnparticipatedDrawingDetailsButtonTapped;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onTimerWithToken:(id)a0 tickedAtNominalTime:(struct { unsigned int x0; double x1; })a1;
- (void)initializeComponents;
- (void)updateWithLotteryInfo:(id)a0 serverTime:(unsigned long long)a1 lotteryReplaced:(BOOL)a2;
- (id)countdownStringWithTimeRemaining:(unsigned long long)a0;
- (BOOL)isFollowingAnchor;
- (id)liveTask;
- (void).cxx_destruct;

@end
