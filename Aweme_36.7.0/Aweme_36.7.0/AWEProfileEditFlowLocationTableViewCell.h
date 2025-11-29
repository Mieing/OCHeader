@class UILabel, UIImageView, UIView;

@interface AWEProfileEditFlowLocationTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) UIImageView *valueImageView;
@property (retain, nonatomic) UIImageView *accessoryImageView;
@property (retain, nonatomic) UIView *separator;

- (void)configWithLocationSegment:(id)a0;
- (void)configWithSelectedLocation:(id)a0;
- (void)configWithCurrentLocation:(id)a0 isSelected:(BOOL)a1;
- (void)configWithClickToFetchLocation;
- (void)configWithFetchLocationFailure;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
