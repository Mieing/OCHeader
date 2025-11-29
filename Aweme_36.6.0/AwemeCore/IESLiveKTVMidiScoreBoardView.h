@class IESLiveKTVMidiViewModel, IESLiveKTVGradientLabel, UIImageView, UILabel;

@interface IESLiveKTVMidiScoreBoardView : UIView

@property (retain, nonatomic) UIImageView *highScoreBoard;
@property (retain, nonatomic) UIImageView *normalScoreBoard;
@property (retain, nonatomic) IESLiveKTVGradientLabel *highScoreLabel;
@property (retain, nonatomic) UILabel *normalScoreLabel;
@property (nonatomic) BOOL upside;
@property (retain, nonatomic) IESLiveKTVMidiViewModel *viewModel;
@property (nonatomic) BOOL middle;

- (id)initWithUpSide:(BOOL)a0 middle:(BOOL)a1 viewModel:(id)a2;
- (void)updateWithScore:(double)a0;
- (void)updateNormalColor:(id)a0;
- (void).cxx_destruct;
- (void)setupViews;

@end
