@class NSString, UIImageView, UILabel, UIButton;

@interface AWEFavoriteRecommendTitleCollectionViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (copy, nonatomic) NSString *Title;
@property (copy, nonatomic) id /* block */ closeBtnClickBlock;

+ (id)identifier;

- (void)closeAWEFavoriteRecommendCardCell;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
