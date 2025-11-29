@class UILabel, AWEIMFansGroupContributionViewModel, UIView;

@interface AWEIMFansGroupContributionCardStyleCollectionViewCell : AWEIMFansGroupCardStyleCollectionViewCell

@property (retain, nonatomic) UILabel *beyondDescLabel;
@property (retain, nonatomic) UILabel *beyondDataTextLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AWEIMFansGroupContributionViewModel *viewModel;

+ (id)identifier;

- (void)__updateUI;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;

@end
