@class IESLiveMediaLinkParticipationCellItem, UILabel, UIImageView;

@interface IESLiveMediaLinkParticipationBarCell : UITableViewCell

@property (retain, nonatomic) IESLiveMediaLinkParticipationCellItem *item;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (void)setupItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
