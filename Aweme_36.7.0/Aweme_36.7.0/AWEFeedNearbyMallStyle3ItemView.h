@class UIStackView, UIImageView, UIView, UILabel;

@interface AWEFeedNearbyMallStyle3ItemView : UIView

@property (retain, nonatomic) UIImageView *poiImageView;
@property (retain, nonatomic) UIView *descInfoView;
@property (retain, nonatomic) UIStackView *tagStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *firstTagLabel;
@property (retain, nonatomic) UILabel *secondTagLabel;
@property (retain, nonatomic) UILabel *thirdTagLabel;
@property (retain, nonatomic) UIView *thirdLineView;
@property (retain, nonatomic) UILabel *priceDiscLabel;
@property (retain, nonatomic) UILabel *spuLabel;
@property (retain, nonatomic) UILabel *hotDescLabel;
@property (retain, nonatomic) UIImageView *hotDescIconView;
@property (nonatomic) BOOL hasTagLabel;
@property (nonatomic) BOOL hasHotDesc;
@property (nonatomic) BOOL hasSpu;
@property (nonatomic) BOOL hasHotDescIcon;

- (void)__setupUI;
- (id)initWithViewConfig:(id)a0;
- (void).cxx_destruct;

@end
