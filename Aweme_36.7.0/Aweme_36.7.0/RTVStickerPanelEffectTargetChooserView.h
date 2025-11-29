@class NSString, CAShapeLayer, RTVSegmentControl, UIView, UILabel;
@protocol RTVStickerPanelEffectTargetChooserViewDelegate, RxInjector, RTVBubbleGenerator;

@interface RTVStickerPanelEffectTargetChooserView : UIView <RTVStickerPanelPluginViewInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVBubbleGenerator> bubbleGenerator;
@property (readonly, nonatomic) RTVSegmentControl *switchTargetView;
@property (retain, nonatomic) UIView *bubbleView;
@property (readonly, nonatomic) CAShapeLayer *cornerRadiusLayer;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (nonatomic) struct CGSize { double width; double height; } cacheSelfSize;
@property (weak, nonatomic) id<RTVStickerPanelEffectTargetChooserViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configureComponents;
- (void)__createTitleLabel;
- (long long)effectTarget;
- (void)__dismissBubbleIfNeeded;
- (void)__createSwitchControl;
- (void)__createCornerRadiusLayer;
- (void)__handleSwitchTargetViewAction:(id)a0;
- (void)showSwitchGuideWithContent:(id)a0;
- (void)dismissSwitchGuideIfNeeded;
- (void)switchTargetToSelf:(BOOL)a0;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
