@class IESECLiveIconsGroupView, NSString, IESECLiveContentGroupView, CALayer, MASConstraint;

@interface IESECLiveIconsContentGroupView : UIView <IESECLiveIconsGroupViewDelegate, CAAnimationDelegate>

@property (retain, nonatomic) IESECLiveIconsGroupView *iconView;
@property (retain, nonatomic) IESECLiveContentGroupView *contentView;
@property (retain, nonatomic) MASConstraint *contenViewLeftConstraint;
@property (retain, nonatomic) CALayer *maskLayer;
@property (nonatomic) BOOL needAnimated;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createAnimatedGroupView;

- (void)p_updateContentViewsConstraints;
- (void)iconsGroupView:(id)a0 didResetURLsWithWidth:(double)a1;
- (void)iconsGroupView:(id)a0 willAppendAvatarWithWidthGap:(double)a1 duration:(double)a2;
- (void)p_updateContainerConstraints;
- (void)p_showAnimation;
- (void)addIcon:(id)a0 content:(id)a1;
- (void)showAnimationAfterDelay:(double)a0;
- (void)animationDidStart:(id)a0;
- (void).cxx_destruct;
- (void)addIcon:(id)a0;
- (void)layoutSubviews;
- (void)addContent:(id)a0;

@end
