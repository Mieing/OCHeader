@class UILabel;

@interface AWEMusicSongListSelectHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *titleLabel;

- (void)displayWithSectionModel:(id)a0;
- (double)heightForHeaderWithSectionModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)setupUI;

@end
