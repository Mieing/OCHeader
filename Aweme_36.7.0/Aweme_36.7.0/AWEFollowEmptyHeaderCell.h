@class UIImageView, UILabel;

@interface AWEFollowEmptyHeaderCell : UITableViewCell

@property (retain, nonatomic) UIImageView *emptyViewImageView;
@property (retain, nonatomic) UILabel *emptyViewTitleLabel;
@property (retain, nonatomic) UILabel *emptyViewDescLabel;

+ (Class)aAWEConcernMutiTargetConfigCommonAdapterClass;
+ (double)headerHeight;

- (id)aAWEConcernMutiTargetConfigCommonAdapter;
- (void)updateTitle:(id)a0 desc:(id)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configureView;

@end
