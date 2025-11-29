@class UIButton, UILabel, UIImageView;
@protocol AWEAboutEaterEggTableViewProtocol;

@interface AWENativeAppDebugCenterTableViewCell : UITableViewCell

@property (retain, nonatomic) UIButton *scanButton;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) id<AWEAboutEaterEggTableViewProtocol> delegate;

- (void)updateEasterEggModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
