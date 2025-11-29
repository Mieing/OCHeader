@class UIView, IESLiveUserCardStore, UIStackView, UIImageView, UIButton, CAGradientLayer, IESLiveEcomInfo, UILabel;

@interface IESLiveUserCardShopInformationView : UIView

@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) IESLiveEcomInfo *ecomInfo;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIImageView *enterShopView;
@property (retain, nonatomic) UIView *rightInfoContainer;
@property (retain, nonatomic) UIStackView *bottomContainer;
@property (nonatomic) double leftInfoWidth;
@property (nonatomic) double space;

- (id)createLine;
- (void)setupBottomContainer;
- (double)getLeftInfoWidth:(double)a0;
- (void)setupUpContainer;
- (void)shopItemDidClicked;
- (id)createLable:(id)a0;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (void)layoutSubviews;
- (void)setupViews;

@end
