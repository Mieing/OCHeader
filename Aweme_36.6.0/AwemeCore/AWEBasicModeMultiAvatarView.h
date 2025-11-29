@class NSArray;

@interface AWEBasicModeMultiAvatarView : UIView

@property (retain, nonatomic) NSArray *avatarArray;
@property (nonatomic) double avatarWidth;
@property (nonatomic) double iconWidth;

- (id)addIconLayer;
- (void)configWithAvatarArray:(id)a0 backgroundColor:(id)a1 needCrop:(BOOL)a2 avatarWidth:(double)a3 needPlaceholder:(BOOL)a4 needRoundRectBg:(BOOL)a5;
- (double)multiAvatarViewWidth;
- (void).cxx_destruct;

@end
