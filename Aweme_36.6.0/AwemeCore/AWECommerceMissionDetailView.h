@class AWECommerceMissionBonusCircleView, TTTAttributedLabel, AWEChallengeModel, UILabel;

@interface AWECommerceMissionDetailView : UIView

@property (retain, nonatomic) AWECommerceMissionBonusCircleView *bounsView;
@property (retain, nonatomic) UILabel *bonusTitleLabel;
@property (retain, nonatomic) TTTAttributedLabel *detailLabel;
@property (retain, nonatomic) UILabel *prizeLabel;
@property (retain, nonatomic) AWEChallengeModel *challenge;
@property (copy, nonatomic) id /* block */ detailLabelTapBlock;

- (id)titleAttributedStringWithTask:(id)a0;
- (id)makeGradientTextWithAttributedText:(id)a0 baselineOffset:(double)a1;
- (id)gradientTextImageWithAttributedText:(id)a0;
- (void)updateWithMission:(id)a0;
- (id)setupDetailLabel;
- (id)generateDescriptionStringWithChallenge:(id)a0 preferredMaxWidth:(double)a1;
- (id)setupPrizeLabel;
- (void)onDetailLabelTapped;
- (id)generateCustomTruncateCharactersString;
- (BOOL)shouldShowTrailProductDescrition:(id)a0;
- (id)getTextColor;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;

@end
