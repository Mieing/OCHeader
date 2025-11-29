@class UILabel, UIImageView;

@interface IESLivePKGuestInteractSettingChooseCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isAvailable;

- (void)updateItemWithTitle:(id)a0 selected:(BOOL)a1;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupViews;

@end
