@class NSMutableArray;

@interface AWEPlayInteractionTagMultiAvatarView : UIView

@property (retain, nonatomic) NSMutableArray *avatars;
@property (nonatomic) double userAvatarWidth;

- (id)leftAvatarView;
- (void)configWithAvatarArray:(id)a0 avatarWidth:(double)a1 maxAvatarCount:(long long)a2 offsetBetweenAvatar:(double)a3;
- (struct CGSize { double x0; double x1; })firstAvatarSize;
- (id)clipAvatarFromCenter:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (double)totalWidth;

@end
