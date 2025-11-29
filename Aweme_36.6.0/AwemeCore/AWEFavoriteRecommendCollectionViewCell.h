@class AWEFavoriteRecommendModel, UIImageView, DUXButton, UILabel, UIView;

@interface AWEFavoriteRecommendCollectionViewCell : UITableViewCell

@property (retain, nonatomic) UIView *leftContentView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subLabel;
@property (retain, nonatomic) DUXButton *createButton;
@property (retain, nonatomic) AWEFavoriteRecommendModel *recommendModel;

+ (id)identifier;

- (void)clickCreateButton;
- (void)updateCoverImageViewWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)updateUI;

@end
