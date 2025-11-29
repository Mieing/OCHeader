@class UIImageView, UILabel;

@interface AWEMusicNoLyricTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *logoView;
@property (retain, nonatomic) UILabel *songNameLabel;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UILabel *tipLabel;

- (void)configWithMusicModel:(id)a0;
- (void)_setupViewComponents;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
