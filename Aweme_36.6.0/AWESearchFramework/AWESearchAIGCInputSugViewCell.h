@class UIView, UILabel, AWESearchAIGCInputSugViewCellViewModel, UIButton;

@interface AWESearchAIGCInputSugViewCell : UITableViewCell

@property (retain, nonatomic) AWESearchAIGCInputSugViewCellViewModel *viewModel;
@property (retain, nonatomic) UILabel *sugTitleLabel;
@property (retain, nonatomic) UIButton *sugActionButton;
@property (retain, nonatomic) UIView *bottomSepView;

+ (id)identifier;

- (void)configUIWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
