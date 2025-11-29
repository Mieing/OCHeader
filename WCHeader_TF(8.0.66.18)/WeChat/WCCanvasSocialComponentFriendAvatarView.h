@interface WCCanvasSocialComponentFriendAvatarView : UIView

@property (nonatomic) unsigned int scene;
@property (nonatomic) BOOL useCdn;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scene:(unsigned int)a1 useCdn:(BOOL)a2;
- (void)updateAvatarsWithAdAvatar:(id)a0 friendUsernames:(id)a1 commonAvatarImgs:(id)a2;
- (id)generateAvatarViewWithUrl:(id)a0;
- (id)generateAvatarViewWithUsername:(id)a0;

@end
