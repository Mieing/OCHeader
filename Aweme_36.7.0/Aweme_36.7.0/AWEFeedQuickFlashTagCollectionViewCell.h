@class UIImageView, UILabel;

@interface AWEFeedQuickFlashTagCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *tagIconView;
@property (retain, nonatomic) UILabel *tagTitleLabel;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
