@class NSString, PAGView, MMLiveCatalogedMerchandiseLotteryInfo, UILabel, UIView, MMLiveMulticastTimerToken;
@protocol MMLiveCatalogedMerchandiseLotteryIndicatorViewDelegate;

@interface MMLiveCatalogedMerchandiseLotteryIndicatorView : UIView <MMLiveMulticastTimerSubscriber>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *pagContainerView;
@property (retain, nonatomic) PAGView *pagView;
@property (retain, nonatomic) UIView *statusContainerView;
@property (retain, nonatomic) UIView *statusCapsuleView;
@property (retain, nonatomic) UILabel *statusLabel;
@property (nonatomic) unsigned long long lastVisualStatus;
@property (retain, nonatomic) MMLiveMulticastTimerToken *timerToken;
@property (retain, nonatomic) MMLiveCatalogedMerchandiseLotteryInfo *lotteryInfo;
@property (nonatomic) unsigned long long visualState;
@property (weak, nonatomic) id<MMLiveCatalogedMerchandiseLotteryIndicatorViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setVisualState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)playLeadingAnimation;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)onTapped;
- (void)onTimerWithToken:(id)a0 tickedAtNominalTime:(struct { unsigned int x0; double x1; })a1;
- (void)initializeComponents;
- (void)updateStatusLabelWithCurrentServerTime:(unsigned long long)a0 lastLotteryInfo:(id)a1;
- (unsigned long long)visualStatusForLotteryInfo:(id)a0 atUnixEpochTime:(unsigned long long)a1;
- (void).cxx_destruct;

@end
