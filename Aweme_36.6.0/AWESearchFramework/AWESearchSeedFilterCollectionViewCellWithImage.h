@class UIButton, UIImageView;

@interface AWESearchSeedFilterCollectionViewCellWithImage : AWESearchSeedFilterCollectionViewCell

@property (nonatomic) BOOL borderSettled;
@property (retain, nonatomic) UIButton *contentButton;
@property (retain, nonatomic) UIImageView *iconView;

- (void)configureUI;
- (void)updateCellConfig;
- (id)defaultSelectedLabelFont;
- (id)defaultUnselectedLabelFont;
- (void)updateWithIconImage:(id)a0;
- (void).cxx_destruct;
- (void)updateWithText:(id)a0;

@end
