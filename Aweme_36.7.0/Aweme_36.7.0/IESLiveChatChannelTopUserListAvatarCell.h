@class NSString, UIImageView, IESLiveChatChannelLinkmicVolumeView, UIView, IESLiveChatChannelTopUserCellModel;

@interface IESLiveChatChannelTopUserListAvatarCell : UICollectionViewCell <CAAnimationDelegate, IESLiveChatChannelTopUserCellUpdatable>

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIView *avatarAnimatedBorder;
@property (retain, nonatomic) UIImageView *micStateView;
@property (retain, nonatomic) IESLiveChatChannelLinkmicVolumeView *micVolumeView;
@property (retain, nonatomic) IESLiveChatChannelTopUserCellModel *cellModel;
@property (copy, nonatomic) id /* block */ animationCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateMute:(BOOL)a0;
- (void)updateWithCellModel:(id)a0;
- (void)bindCellModel:(id)a0;
- (void)avatarCellDidTap:(id)a0;
- (void)startAvatarAnimation;
- (void)beginAnimation:(id /* block */)a0;
- (void)animationDidStart:(id)a0;
- (BOOL)isAccessibilityElement;
- (void)updateVolume:(long long)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)stopAnimation;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setup;
- (void)endAnimation;

@end
