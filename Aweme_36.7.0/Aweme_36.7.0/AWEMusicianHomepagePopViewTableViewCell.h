@class UILabel, UIView;

@interface AWEMusicianHomepagePopViewTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UILabel *songTitleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *tagContainerView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UILabel *vipLabel;

- (void)configSubviews;
- (void)refreshWithTitle:(id)a0 tag:(id)a1 description:(id)a2 showVipTag:(BOOL)a3 rankNum:(id)a4;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
