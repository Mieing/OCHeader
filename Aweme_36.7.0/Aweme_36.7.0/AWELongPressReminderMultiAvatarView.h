@class NSMutableArray;

@interface AWELongPressReminderMultiAvatarView : UIView

@property (retain, nonatomic) NSMutableArray *avatars;
@property (nonatomic) double userAvatarWidth;

- (id)leftAvatarView;
- (void)configWithAvatarArray:(id)a0 avatarWidth:(double)a1 maxAvatarCount:(long long)a2 offsetBetweenAvatar:(double)a3;
- (void)cropIcon:(id)a0 offsetBetweenAvatar:(double)a1;
- (struct CGSize { double x0; double x1; })firstAvatarSize;
- (void).cxx_destruct;
- (double)totalWidth;

@end
