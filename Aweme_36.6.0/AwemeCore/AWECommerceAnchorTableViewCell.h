@class UIButton, UIImageView, UILabel, UIView, YYLabel;

@interface AWECommerceAnchorTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) YYLabel *betaLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *remindView;
@property (retain, nonatomic) UIButton *addAnchorButton;
@property (nonatomic) BOOL disableAndGrey;
@property (copy, nonatomic) id /* block */ addAIAnchorBlock;

+ (id)cellIdentifier;

- (void)buildViews;
- (void)addAnchorTapped:(id)a0;
- (void)addRemindViewWithModel:(id)a0;
- (void)addRemindView;
- (void)removeRemindView;
- (void)updateCellContentWith:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (unsigned long long)accessibilityTraits;

@end
