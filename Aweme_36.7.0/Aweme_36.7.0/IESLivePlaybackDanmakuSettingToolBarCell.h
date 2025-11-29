@class UILabel, UIImageView, IESLivePlaybackDanmakuSettingBlockItem;

@interface IESLivePlaybackDanmakuSettingToolBarCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) IESLivePlaybackDanmakuSettingBlockItem *item;

- (void)cellDidTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
