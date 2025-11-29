@class UIImageView, DUXBaseLabel, AWEFeedHomepageLongPressPanelItem;

@interface AWEFeedHomepageLongPressEditTableViewCell : UITableViewCell

@property (nonatomic) BOOL isChoosed;
@property (retain, nonatomic) UIImageView *leftIcon;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) DUXBaseLabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *choosedIcon;
@property (retain, nonatomic) AWEFeedHomepageLongPressPanelItem *item;

- (void)updateChoosed:(BOOL)a0;
- (id)choosedImage;
- (id)notChoosedImage;
- (void)configCellWithItem:(id)a0 isChoosed:(BOOL)a1;
- (void)updateWithItemChanged:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setupUI;
- (void)updateTitleLabel;

@end
