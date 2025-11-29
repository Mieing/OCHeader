@class AWEPadLeftSideBarMiniGameItemDataModel, UILabel, UIImageView;

@interface AWEPadMiniGameCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWEPadLeftSideBarMiniGameItemDataModel *model;
@property (retain, nonatomic) UILabel *gameTextLabel;
@property (retain, nonatomic) UIImageView *gameImageView;

- (void)configCellWithModel:(id)a0 withThemeType:(long long)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
