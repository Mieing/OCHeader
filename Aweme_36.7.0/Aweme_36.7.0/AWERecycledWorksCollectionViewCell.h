@class DUXBaseLabel, DUXBaseImageView, CAGradientLayer;
@protocol AWERecycledWorksCellDelegate;

@interface AWERecycledWorksCollectionViewCell : UICollectionViewCell

@property (nonatomic) long long expireDays;
@property (retain, nonatomic) DUXBaseImageView *coverImageView;
@property (retain, nonatomic) CAGradientLayer *topBgGradient;
@property (retain, nonatomic) DUXBaseImageView *rightTopIconView;
@property (retain, nonatomic) DUXBaseImageView *selectedImageView;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (nonatomic) BOOL shouldShowTopRightIcon;
@property (weak, nonatomic) id<AWERecycledWorksCellDelegate> delegate;

- (void)configWithModel:(id)a0;
- (void)updateSelectedState:(unsigned long long)a0;
- (id)coverImageURLsWithAweme:(id)a0;
- (long long)expireDaysForAwemeModel:(id)a0;
- (BOOL)shouldShowTopRightIconWithAweme:(id)a0;
- (id)rightTopImageWithAweme:(id)a0;
- (BOOL)shouldShowStoryTagWithAweme:(id)a0;
- (BOOL)shouldShowLongVideoTagWithAweme:(id)a0;
- (BOOL)shouldShowSharePostTagWithAweme:(id)a0;
- (BOOL)shouldShowArticleTagWithAweme:(id)a0;
- (long long)convertNumberToDays:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
