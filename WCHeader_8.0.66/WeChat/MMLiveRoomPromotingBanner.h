@class MMFinderLiveSyncPromotionInfo, CAGradientLayer, PAGView, MMLiveTaskId, UIImageView, MMUILabel;

@interface MMLiveRoomPromotingBanner : UIView

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) MMUILabel *promotingStateLabel;
@property (retain, nonatomic) PAGView *animationView;
@property (retain, nonatomic) UIImageView *doneIconView;
@property (retain, nonatomic) MMFinderLiveSyncPromotionInfo *promotionInfo;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) unsigned long long lastPromotingState;
@property (copy, nonatomic) id /* block */ promotingStateLabelClickedBlock;
@property (copy, nonatomic) id /* block */ promotingStateLabelTimeoutBlock;
@property (nonatomic) double maxWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTaskId:(id)a1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateSyncPromotionInfo:(id)a0;
- (void)sizeToFits;
- (id)finderLiveTask;
- (unsigned long long)promotingState:(id)a0;
- (void)onPromotingStateLabelClicked;
- (void)onStopPromoting;
- (void).cxx_destruct;

@end
