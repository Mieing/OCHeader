@class UIView, IESLLPOIDetailNGPOIMallCardComponentViewModel, IESLLGradientView, UIImageView, IESLLDitoPOIMallRankLabel, IESLLPOISecKillView, YYLabel, UILabel;

@interface IESLLPOIDetailNGPOIMallCardComponentView : LLDitoComponentView

@property (weak, nonatomic) IESLLPOIDetailNGPOIMallCardComponentViewModel *viewModel;
@property (retain, nonatomic) IESLLGradientView *photoMask;
@property (retain, nonatomic) UIView *poiInfoContainer;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYLabel *poiStatusLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *floorLabel;
@property (retain, nonatomic) UIView *hightLightContainer;
@property (retain, nonatomic) IESLLDitoPOIMallRankLabel *rankLabel;
@property (retain, nonatomic) UIImageView *rankImageView;
@property (retain, nonatomic) YYLabel *recommendLabel;
@property (retain, nonatomic) UIView *evaluationContainer;
@property (retain, nonatomic) UIImageView *evaluationImage;
@property (retain, nonatomic) UILabel *evaluationLabel;
@property (retain, nonatomic) UILabel *evaluationTailLabel;
@property (retain, nonatomic) UIView *spuContainer;
@property (retain, nonatomic) UIImageView *spuHeadImageView;
@property (retain, nonatomic) UILabel *spuNameLabel;
@property (retain, nonatomic) UILabel *spuPriceLabel;
@property (retain, nonatomic) UILabel *spuOriginPriceLabel;
@property (retain, nonatomic) YYLabel *spuDiscountLabel;
@property (retain, nonatomic) IESLLPOISecKillView *secKillView;
@property (retain, nonatomic) UIView *seperatorLineView;
@property (nonatomic) double createDuration;
@property (nonatomic) double bindDuration;
@property (nonatomic) BOOL isCreateView;

- (BOOL)shouldShowRecommend;
- (void)trackPerformance;
- (void)updateViewModel:(id)a0;
- (void)coverTapped:(id)a0;
- (void)openPOIDetail;
- (void)setupSecKillView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
