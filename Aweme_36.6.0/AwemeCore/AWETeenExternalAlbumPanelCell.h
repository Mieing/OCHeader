@class UIImageView, UILabel;

@interface AWETeenExternalAlbumPanelCell : UITableViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIImageView *diggImageView;
@property (retain, nonatomic) UILabel *diggLabel;

- (void)updateCoverWithModel:(id)a0;
- (void)updateDescriptionWithModel:(id)a0;
- (void)updateDurationWithModel:(id)a0;
- (void)updateDiggWithModel:(id)a0;
- (void)updateWithAwemeModel:(id)a0 isAnchored:(BOOL)a1;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
