@class UILabel, UIView;

@interface MMFinderLiveConnectMicPkSelectItemView : UITableViewCell

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;

+ (id)ReuseIdentifier;
+ (double)cellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initViews;
- (void)layoutSubviews;
- (void)configWithMode:(unsigned long long)a0 subTitle:(id)a1;
- (void).cxx_destruct;

@end
