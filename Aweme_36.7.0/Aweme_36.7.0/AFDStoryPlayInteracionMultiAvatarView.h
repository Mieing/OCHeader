@class NSMutableArray;

@interface AFDStoryPlayInteracionMultiAvatarView : UIView

@property (retain, nonatomic) NSMutableArray *avatarURLModels;
@property (retain, nonatomic) NSMutableArray *avatarViews;

- (double)avatarOffset;
- (double)avatarMargin;
- (id)createAvatarViewWithURLModel:(id)a0;
- (void)playInsertAvatarAnimation;
- (void)playReplaceAvatarAnimation;
- (void)addLastAvatar;
- (void)removeFirstAvatar;
- (void)insertAvatarWithModel:(id)a0;
- (void)removeAvatarWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateWithModel:(id)a0;
- (double)avatarWidth;

@end
