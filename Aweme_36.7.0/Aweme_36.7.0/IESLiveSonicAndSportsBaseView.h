@class UIImageView, UIView, HTSLiveArtTextLabel, IESLiveRebornGiftAnimationNode;

@interface IESLiveSonicAndSportsBaseView : IESLiveRebornGiftView

@property (retain, nonatomic) UIView *groupContainerView;
@property (retain, nonatomic) HTSLiveArtTextLabel *groupXLabel;
@property (retain, nonatomic) HTSLiveArtTextLabel *groupCountLabel;
@property (retain, nonatomic) IESLiveRebornGiftAnimationNode *currentNode;
@property (nonatomic) long long groupIndex;
@property (nonatomic) unsigned long long animationLevel;
@property (nonatomic) BOOL disableComboCount;
@property (retain, nonatomic) UIView *outlineView;
@property (retain, nonatomic) UIImageView *giftView;

- (void)updateWithGiftAnimationNode:(id)a0;
- (void)p_updateColorIndexWithPrice:(unsigned long long)a0;
- (id)copyFromNode:(id)a0;
- (void)p_updateAnimationLevelWithGroupIndex:(long long)a0;
- (double)p_timeIntervalWithAnimationLevel:(unsigned long long)a0;
- (double)p_calculateLargeGiftTimeInterval;
- (void)layoutLabelGroupXLabelContainer;
- (void)upgradeWithGiftAnimationNode:(id)a0 containerView:(id)a1;
- (void)startFlashAnimationWith:(id)a0;
- (void)p_setStaticImageOnGiftTrayWithURL:(id)a0 outlineMaskLayer:(id)a1 maskLayer:(id)a2;
- (void).cxx_destruct;

@end
