@class NSString, UIImageView, AWEInteractionEditTagStickerModel, CALayer, UIView, UILabel;
@protocol ACCStickerContainerProtocol;

@interface ACCEditTagStickerView : UIView <ACCStickerEditContentProtocol, ACCEditTagStickerViewProtocol>

@property (retain, nonatomic) CALayer *animationLayer;
@property (retain, nonatomic) UIView *pointView;
@property (retain, nonatomic) UIView *tagBackgroundView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *rightArrowImageView;
@property (readonly, nonatomic) AWEInteractionEditTagStickerModel *interactionStickerModel;
@property (nonatomic) double maxContentWidth;
@property (nonatomic) double maxTextWidth;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic, getter=isTransparent) BOOL transparent;
@property (nonatomic) long long stickerId;
@property (copy, nonatomic) id /* block */ triggerDragDeleteCallback;
@property (copy, nonatomic) id /* block */ coordinateDidChange;
@property (weak, nonatomic) id<ACCStickerContainerProtocol> stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyForContext:(id)a0;
- (void)updateInteractionModel:(id)a0;
- (void)p_updateIconImage;
- (id)editTagInfo;
- (void)setInteractionStickerModel:(id)a0;
- (BOOL)showIconImage;
- (id)initWithStickerModel:(id)a0;
- (struct CGPoint { double x0; double x1; })normalizedTagCenterPoint;
- (void)showHeartAnimation;
- (void)showAppearAnimation;
- (double)calculateContentSizeWithMaxTextWidth:(double)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateUI;

@end
