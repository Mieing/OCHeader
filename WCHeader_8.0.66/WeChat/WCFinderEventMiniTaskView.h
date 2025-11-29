@class UIProgressView, UIImageView, UILabel, UIView;
@protocol WCFinderEventMiniTaskViewDelegate;

@interface WCFinderEventMiniTaskView : UIView

@property (retain, nonatomic) UILabel *timeWordingLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *rewardWordingLabel;
@property (retain, nonatomic) UILabel *rewardLabel;
@property (retain, nonatomic) UILabel *rewardProgressWordingLabel;
@property (retain, nonatomic) UILabel *rewardProgressLabel;
@property (retain, nonatomic) UIProgressView *rewardProgressView;
@property (retain, nonatomic) UIView *miniTaskEntranceView;
@property (retain, nonatomic) UILabel *miniTaskEntranceWordingLabel;
@property (retain, nonatomic) UILabel *memberNumLabel;
@property (retain, nonatomic) UIImageView *miniTaskRightArrowView;
@property (weak, nonatomic) id<WCFinderEventMiniTaskViewDelegate> delegate;

- (id)init;
- (void)updateWithEventInfo:(id)a0;
- (void)addFlexLayout;
- (BOOL)shouldShowExpiredTimeWithEventInfo:(id)a0;
- (id)getMemberNumberTextWithEventInfo:(id)a0;
- (id)displayNumberStringWith:(double)a0 maxDecimalDigits:(unsigned long long)a1;
- (void)miniTaskEntranceDidClick;
- (void).cxx_destruct;

@end
