@class UIImageView, UILabel, AWEIMMixLoraUserCellModel;

@interface AWEIMMixLoraUserCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *loraImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) AWEIMMixLoraUserCellModel *model;

- (void)handleThemeChangeNotification;
- (void)__setupUI;
- (void)renderModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
