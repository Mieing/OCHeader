@class UIImageView, AWETeenDiscoverChannelModel, UILabel, UIView;

@interface AWETeenDiscoverAllChannelCell : UICollectionViewCell

@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) AWETeenDiscoverChannelModel *channelModel;

- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
