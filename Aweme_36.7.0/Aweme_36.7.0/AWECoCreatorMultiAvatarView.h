@class NSMutableArray;

@interface AWECoCreatorMultiAvatarView : UIView

@property (nonatomic) double offsetBetweenAvatar;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) NSMutableArray *avatars;
@property (nonatomic) double userAvatarWidth;

- (id)leftAvatarView;
- (struct CGSize { double x0; double x1; })firstAvatarSize;
- (void)configWithAvatarArray:(id)a0 avatarWidth:(double)a1 maxAvatarCount:(long long)a2 offsetBetweenAvatar:(double)a3 borderWidth:(double)a4 borderColor:(struct CGColor { } *)a5;
- (void)addBorderMaskLayerForView:(id)a0;
- (void).cxx_destruct;
- (double)totalWidth;

@end
