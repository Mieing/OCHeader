@class UIImageView, AWEFeedInsetsLabel, UIView, UILabel, DUXButton;

@interface AWEWatchLaterRecommendCell : UICollectionViewCell

@property (retain, nonatomic) UIView *coverContainerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEFeedInsetsLabel *tipLabel;
@property (retain, nonatomic) UIView *infoContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *authorImageView;
@property (retain, nonatomic) UILabel *authorLabel;
@property (retain, nonatomic) UIImageView *digImageView;
@property (retain, nonatomic) UILabel *digLabel;
@property (retain, nonatomic) UIImageView *typeIcon;
@property (retain, nonatomic) UILabel *typeLabel;
@property (retain, nonatomic) DUXButton *addButton;
@property (copy, nonatomic) id /* block */ addBlock;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
