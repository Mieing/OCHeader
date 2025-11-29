@class IESLiveScreencastLinkParticipationCellItem, UILabel, UIImageView;

@interface IESLiveScreencastLinkAnchorParticipationBarCell : UITableViewCell

@property (retain, nonatomic) IESLiveScreencastLinkParticipationCellItem *item;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (void)setupItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
