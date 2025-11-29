@class UIImageView, UILabel, UIView, IESLiveAnnouncementEditFunctionCellItem;

@interface IESLiveAnnouncementEditFunctionCell : UITableViewCell

@property (retain, nonatomic) UILabel *leftTitle;
@property (retain, nonatomic) UIImageView *infoTipView;
@property (retain, nonatomic) UIImageView *star;
@property (retain, nonatomic) UIView *redDot;
@property (retain, nonatomic) UILabel *rightTitle;
@property (retain, nonatomic) UIImageView *rightIcon;
@property (retain, nonatomic) IESLiveAnnouncementEditFunctionCellItem *item;

- (void)cellDidTap;
- (void)setUpCellContent;
- (void)onInfoTipViewTapped;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
