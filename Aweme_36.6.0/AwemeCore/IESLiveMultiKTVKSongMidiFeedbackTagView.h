@class CAGradientLayer, IESLiveKTVGradientLabel, UIImageView, NSString, UILabel, NSNumber;

@interface IESLiveMultiKTVKSongMidiFeedbackTagView : UIView

@property (retain, nonatomic) CAGradientLayer *bgColorLayer;
@property (retain, nonatomic) UIImageView *highScoreIcon;
@property (retain, nonatomic) UILabel *songNameLabel;
@property (retain, nonatomic) IESLiveKTVGradientLabel *totalScoreLabel;
@property (retain, nonatomic) IESLiveKTVGradientLabel *scoreUnitLabel;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) IESLiveKTVGradientLabel *midiFeedbackTipsLabel;
@property (copy, nonatomic) NSString *songName;
@property (nonatomic) double score;
@property (nonatomic) double highScoreThreshold;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *midiFeedbackTips;
@property (retain, nonatomic) UIImageView *highScoreAchievementView;
@property (nonatomic) BOOL isHighScore;
@property (retain, nonatomic) UILabel *rightQuoteLabel;
@property (retain, nonatomic) UILabel *leftQuoteLabel;
@property (retain, nonatomic) NSNumber *songId;
@property (copy, nonatomic) NSString *userId;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 feedbackConfig:(id)a1;
- (id)createBGGradientLayer:(BOOL)a0;
- (id)createTotalScoreLabel:(BOOL)a0;
- (id)createScoreUnitLabel:(BOOL)a0;
- (id)createSongNameLabel;
- (double)calculateLengthOfSongName:(id)a0;
- (id)createPaddingLabel;
- (id)createMidiFeedbackTips:(BOOL)a0;
- (void).cxx_destruct;
- (void)setupViews;

@end
