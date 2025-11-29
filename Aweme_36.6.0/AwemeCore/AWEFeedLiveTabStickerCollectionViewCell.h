@class UILabel, UIImageView, MASConstraint;

@interface AWEFeedLiveTabStickerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) MASConstraint *enableIconSubtitleConstraint;
@property (retain, nonatomic) MASConstraint *disableIconSubtitleConstraint;
@property (copy, nonatomic) id /* block */ stickerViewDidClicked;

+ (id)reuseIdentifier;

- (void)configWithCellModel:(id)a0;
- (void)stickerViewDidClickedAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
