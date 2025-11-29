@class UILabel, UIView;

@interface IESLiveFunctionSquareRecentlySectionView : IESLiveFunctionSquareBaseTableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *whiteBGView;

+ (double)heightOfDefault;

- (void)initializeOnCellLoaded;
- (void)updateWithSceneType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)updateWithTitle:(id)a0;

@end
