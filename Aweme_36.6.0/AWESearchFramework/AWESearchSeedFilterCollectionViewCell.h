@class UILabel, AWESearchSeedFilterViewUtil;

@interface AWESearchSeedFilterCollectionViewCell : UICollectionViewCell

@property (nonatomic) double fontSize;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) AWESearchSeedFilterViewUtil *configInfo;

- (void)configureUI;
- (void)updateCellConfig;
- (id)defaultSelectedLabelFont;
- (id)defaultUnselectedLabelFont;
- (void)updateContConfiguration:(id)a0;
- (void)updatePosConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (void)updateWithText:(id)a0;

@end
