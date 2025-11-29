@class UILabel, UIImageView, UIView;

@interface AWEFeedLLMRecommendSurveyOptionCell : UITableViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *optionLabel;
@property (retain, nonatomic) UIImageView *optionSelectedImageView;
@property (nonatomic) BOOL isOptionSelected;

+ (id)reuseIdentifier;

- (id)optionLabelFont;
- (void)updateWithOptionTitle:(id)a0;
- (void)updateOptionSelectedStatus:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
