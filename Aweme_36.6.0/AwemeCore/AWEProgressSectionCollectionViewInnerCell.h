@class NSString, UIImageView, UIImage, UILabel, UIVisualEffectView, LOTAnimationView;

@interface AWEProgressSectionCollectionViewInnerCell : UICollectionViewCell <AWEProgressSectionCellProtocol>

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *iconImgView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIImage *bgImage;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })cellInsets;
+ (double)itemWidthWithText:(id)a0;
+ (id)textFont;
+ (id)identifier;

- (void)configWithChapterModel:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
