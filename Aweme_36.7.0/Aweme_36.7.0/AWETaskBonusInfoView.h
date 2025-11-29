@class UILabel, AWETaskBonusProgressView, UIStackView;

@interface AWETaskBonusInfoView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tallestProfitLabel;
@property (retain, nonatomic) UILabel *mostParticipationLabel;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) AWETaskBonusProgressView *progressView;
@property (retain, nonatomic) UIStackView *progressStackView;
@property (nonatomic) double preferredMaxLayoutWidth;

- (id)titleLightAttributedStringWithChallenge:(id)a0;
- (id)profitLightAttributedStringWithChallenge:(id)a0;
- (id)participationLightAttributedStringWithTask:(id)a0;
- (id)titleAttributedStringWithTask:(id)a0;
- (id)connectorAttributedString;
- (id)makeGradientTextWithAttributedText:(id)a0 baselineOffset:(double)a1;
- (id)preLightAttributedDictionaryWithChallenge:(id)a0;
- (id)gradientTextImageWithAttributedText:(id)a0;
- (void)updateBonusViewWithChallenge:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
