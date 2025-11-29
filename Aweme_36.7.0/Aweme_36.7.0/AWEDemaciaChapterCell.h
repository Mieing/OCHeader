@class UIColor, UIFont, UILabel, UIView;

@interface AWEDemaciaChapterCell : UICollectionViewCell

@property (retain, nonatomic) UIView *headerSeparator;
@property (retain, nonatomic) UIView *footerSeparator;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *loopContainer;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *fakeDescLabel;
@property (retain, nonatomic) UIColor *separatorColor;
@property (retain, nonatomic) UIFont *descFont;
@property (nonatomic) long long type;

+ (BOOL)optimizeChapterProgress;
+ (id)identifier;

- (double)descLabelWidth;
- (void)showHeaderSeparatorView:(BOOL)a0;
- (void)showFooterSeparatorView:(BOOL)a0;
- (id)defaultDescLabelFont;
- (void)prepareLayoutForAnimation:(BOOL)a0;
- (void)updateWithChapterModel:(id)a0;
- (void)updateLayoutIfNeeded;
- (BOOL)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (id)defaultSeparatorColor;

@end
