@class UILabel, AWEMusicLyricsCellModel;

@interface AWEMusicLyricsCell : UITableViewCell

@property (retain, nonatomic) UILabel *label;
@property (nonatomic) unsigned long long state;
@property (nonatomic) double unselectedScale;
@property (retain, nonatomic) AWEMusicLyricsCellModel *model;

- (void)configWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setup;

@end
