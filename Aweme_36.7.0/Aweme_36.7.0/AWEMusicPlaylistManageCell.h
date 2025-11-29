@class UIImageView, DUXRadioBox, UILabel, UIView;

@interface AWEMusicPlaylistManageCell : UITableViewCell

@property (retain, nonatomic) UIImageView *reorderBars;
@property (retain, nonatomic) DUXRadioBox *selectRadio;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *author;
@property (retain, nonatomic) UIView *effectView;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
