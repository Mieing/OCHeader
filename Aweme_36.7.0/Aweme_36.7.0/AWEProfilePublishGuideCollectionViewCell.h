@class NSString, UIImageView, UILabel, UIButton;

@interface AWEProfilePublishGuideCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *shootBtn;
@property (copy, nonatomic) NSString *shootSchema;
@property (copy, nonatomic) NSString *challengeType;
@property (nonatomic) double headerPadding;
@property (nonatomic) BOOL isJunmActionForbiden;

+ (double)roughContentHeight;
+ (id)identifier;
+ (double)viewHeight;

- (void)configWithModel:(id)a0;
- (void)forbidJumpAction:(BOOL)a0;
- (void)trackEventForClickShootBtn;
- (void)startShooting;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
