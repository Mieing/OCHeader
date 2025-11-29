@class AWELandscapePageContext, UIImageView, AWEAwemeModel, UILabel, UIView;

@interface AWELandscapeDetailRelatedVideoCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *timeContainer;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIView *videoInfoContainerView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UIImageView *diggIcon;
@property (retain, nonatomic) UILabel *diggCount;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWELandscapePageContext *context;

+ (struct CGSize { double x0; double x1; })cellSizeWithWidth:(double)a0;

- (void)configWithAwemeModel:(id)a0 context:(id)a1;
- (void)updateDescriptionLabel;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
