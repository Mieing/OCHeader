@class AWEMissionPrizeView, UIButton, AWEChallengeModel, UIView, AWETaskBonusInfoView, UILabel, AWEMissionParticipationInfoView;
@protocol AWEChallengeDetailHorizontalVideoView;

@interface AWEChallengeDetailTaskInfoView : UIView <AWEChallengeDetailTaskInfoView>

@property (retain, nonatomic) AWEMissionParticipationInfoView *participationInfoView;
@property (retain, nonatomic) AWEMissionPrizeView *prizeView;
@property (retain, nonatomic) AWETaskBonusInfoView *bonusView;
@property (retain, nonatomic) AWEChallengeModel *challenge;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (nonatomic) double bottomPadding;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIButton *detailButton;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView<AWEChallengeDetailHorizontalVideoView> *taskExampleView;

- (void)updateDetailButtonWithChallenge:(id)a0;
- (void)updateDescriptionLabelWithChallenge:(id)a0;
- (struct CGSize { double x0; double x1; })layoutWithConstrainedWidth:(double)a0;
- (void)navigateToTaskDetail;
- (void)updateWithChallenge:(id)a0;
- (void)detailButtonAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
