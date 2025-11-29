@class UILabel, AWEGrouponAtmosphereExpression, AWEAwemeModel;

@interface AWEGrouponFeedLiveExperimentPriceView : UIView

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UILabel *currencySignLabel;
@property (retain, nonatomic) UILabel *finalPriceLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UILabel *secondPriceLabel;
@property (retain, nonatomic) UILabel *marketingToolInfoLabel;
@property (retain, nonatomic) AWEGrouponAtmosphereExpression *atmosphereExpression;

+ (id)parsePriceInfo:(id)a0;
+ (id)formatPrice:(double)a0;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setupLayout;
- (void)updateInfo:(id)a0;

@end
