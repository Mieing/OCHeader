@class CAGradientLayer, NSString, UIImageView, AWEAwemeModel, AWEPOIBizModel, UILabel, UIView;

@interface AWEPOIEmphraseNearbyHotRankView : UIView

@property (weak, nonatomic) AWEAwemeModel *aweme;
@property (weak, nonatomic) AWEPOIBizModel *poiBiz;
@property (retain, nonatomic) UILabel *topLabel;
@property (retain, nonatomic) CAGradientLayer *topLayer;
@property (retain, nonatomic) UIView *topContainer;
@property (retain, nonatomic) UILabel *hotNameLabel;
@property (retain, nonatomic) UILabel *poiNameLabel;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (copy, nonatomic) NSString *referString;

- (void)updateUIWithModel:(id)a0;
- (BOOL)shouldUpdateUI:(id)a0;
- (void)trackBottomBarShow;
- (void)trackBottomBarClick;
- (id)topLabelFont;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)updateModel:(id)a0;

@end
