@class LOTAnimationView, UIImageView, UILabel;

@interface AWECommentVideoAbstractSectionCell : UICollectionViewCell

@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) UIImageView *iconImgView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *timeLable;
@property (nonatomic) double timeLabelWidth;

+ (id)identifier;

- (void)configUI;
- (id)contentFloatingRedTextIfNeed:(id)a0 textExtra:(id)a1 extraLength:(long long)a2 attributes:(id)a3;
- (void)updateWithContent:(id)a0 jumpTime:(id)a1 sectionModel:(id)a2 timeLabelWidth:(double)a3 path:(id)a4;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
