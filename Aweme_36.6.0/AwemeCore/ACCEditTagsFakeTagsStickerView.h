@class DUXBaseLabel, AWEInteractionEditTagStickerModel, UIView, CALayer, DUXBaseImageView;

@interface ACCEditTagsFakeTagsStickerView : UIView

@property (readonly, nonatomic) AWEInteractionEditTagStickerModel *interactionStickerModel;
@property (retain, nonatomic) UIView *pointView;
@property (retain, nonatomic) CALayer *animationLayer;
@property (retain, nonatomic) UIView *tagBackgroundView;
@property (retain, nonatomic) DUXBaseImageView *iconView;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) DUXBaseImageView *rightArrowImageView;
@property (nonatomic) double totalWidth;
@property (nonatomic) double totalHeight;
@property (nonatomic) double maxContentWidth;
@property (nonatomic) double maxTextWidth;

- (void)updateInteractionModel:(id)a0;
- (void)p_updateIconImage;
- (id)editTagInfo;
- (void)setInteractionStickerModel:(id)a0;
- (BOOL)showIconImage;
- (id)initWithStickerModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateUI;

@end
