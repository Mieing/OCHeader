@class UILabel, UIImageView, UIView;

@interface IESLiveKTVSearchAssociationCell : UITableViewCell

@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UIImageView *searchImageView;

- (void)renderWithSugModel:(id)a0 scaleRatio:(long long)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
