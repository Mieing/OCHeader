@class UIStackView, UIImageView, UILabel, UIView;

@interface AWEFeedNearbyMallStyle2ItemView : UIView

@property (retain, nonatomic) UIImageView *poiImageView;
@property (retain, nonatomic) UIView *descInfoView;
@property (retain, nonatomic) UIView *cornerTagView;
@property (retain, nonatomic) UILabel *cornerTagLabel;
@property (retain, nonatomic) UIStackView *tagStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *firstTagLabel;
@property (retain, nonatomic) UILabel *secondTagLabel;
@property (retain, nonatomic) UILabel *thirdTagLabel;
@property (retain, nonatomic) UIView *hotDescView;
@property (retain, nonatomic) UILabel *hotDescLabel;
@property (retain, nonatomic) UIImageView *hotDescIconView;
@property (retain, nonatomic) UIView *spuView;
@property (retain, nonatomic) UILabel *spuLabel;
@property (nonatomic) BOOL hasTagLabel;
@property (nonatomic) BOOL hasHotDesc;
@property (nonatomic) BOOL hasSpu;
@property (nonatomic) BOOL hasCornerDesc;
@property (nonatomic) BOOL hasHotDescIcon;

- (void)__setupUI;
- (id)initWithTitle:(id)a0 poiImageUrlList:(id)a1 fristTag:(id)a2 secondTag:(id)a3 thirdTag:(id)a4 hotDesc:(id)a5 hotIconUrlList:(id)a6 spuDesc:(id)a7 cornerDesc:(id)a8;
- (void).cxx_destruct;

@end
