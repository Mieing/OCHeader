@class NSString, AWEButton, UIImageView, BDImageView;

@interface AWEAdAvatarView : UIView <AWEAdAvatarView>

@property (nonatomic) BOOL canShowVirtualAnimatedAvatarIfNeed;
@property (nonatomic) BOOL enableLeftHandOptimize;
@property (retain, nonatomic) AWEButton *avatarButton;
@property (retain, nonatomic) UIImageView *decorationView;
@property (retain, nonatomic) BDImageView *virtualAnimatedAvatarView;
@property (nonatomic) BOOL shouldUseGrayImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)setEnableLeftHandOptimize:(BOOL)a0 withPointInsideBlock:(id /* block */)a1;
- (void)updateVirtualAnimatedAvatarViewForIsHidden:(BOOL)a0;
- (void)configWithUser:(id)a0 shouldShowDecoration:(BOOL)a1 enterFrom:(id)a2;
- (void)configWithUser:(id)a0 shouldShowDecoration:(BOOL)a1 enterFrom:(id)a2 awemodel:(id)a3;
- (void)replayDecorationAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getAvatarFrame;
- (void)updateDecorationLayoutToShrinkStyleWithUser:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)init;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
