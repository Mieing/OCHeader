@class UIImageView, UILabel, AWERepoPOIModel;

@interface AWENewPublishPOIRecoverCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLab;
@property (retain, nonatomic) AWERepoPOIModel *poiModel;

- (id)poiNameWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
