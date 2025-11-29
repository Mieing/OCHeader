@class UIImageView, UILabel, UIView;

@interface AWEMutiPathSaveSettingCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UIView *lineView;

- (void)updateIsSelected:(BOOL)a0;
- (id)initWithTitle:(id)a0 iconName:(id)a1;
- (void)hideBottomLineView;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
