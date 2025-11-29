@class NSArray;

@interface AWEIMMultiAvatarView : UIView

@property (retain, nonatomic) NSArray *avatarArray;
@property (nonatomic) double avatarWidth;
@property (nonatomic) double iconWidth;

- (id)addIconLayer;
- (void)configWithAvatarArray:(id)a0 backgroundColor:(id)a1 needCrop:(BOOL)a2 avatarWidth:(double)a3 needPlaceholder:(BOOL)a4 needRoundRectBg:(BOOL)a5;
- (double)multiAvatarViewWidth;
- (void)configWithContext:(id)a0;
- (void)configWithAvatarArray:(id)a0 backgroundColor:(id)a1 needCrop:(BOOL)a2 avatarWidth:(double)a3 needPlaceholder:(BOOL)a4;
- (void)configWithAvatarArray:(id)a0 backgroundColor:(id)a1 needCrop:(BOOL)a2 avatarWidth:(double)a3 needPlaceholder:(BOOL)a4 needRoundRectBg:(BOOL)a5 maxAvatarCount:(int)a6 avatarBorderColor:(id)a7;
- (int)showedAvatarCount;
- (void)__planetAroundStyleUIWithContext:(id)a0;
- (id)avatarArray:(id)a0 maxAvatarCount:(int)a1;
- (void).cxx_destruct;

@end
