@class BDImage, UIImage, UILabel, BDImageView;

@interface ACCAIGCUGCFusionCreationToolsAIView : UIView

@property (nonatomic) unsigned long long enterType;
@property (retain, nonatomic) BDImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImage *aiImage;
@property (retain, nonatomic) BDImage *loadingImage;
@property (nonatomic) BOOL needBackground;
@property (nonatomic) BOOL newStyle;

+ (double)viewHeight;

- (void)onThemeChanged;
- (void)innerNewUpdateAIButtonWithStatus:(unsigned long long)a0;
- (BOOL)shouldFitLightModeUI;
- (id)initWithEnterType:(unsigned long long)a0 newStyle:(BOOL)a1;
- (void)updateAIButtonWithStatus:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setupViews;

@end
