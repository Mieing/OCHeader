@class WCFinderHeadImageView, UITapGestureRecognizer, WCFinderCommentDetailAvatarUpdateInfo;

@interface WCFinderCommentDetailAvatarView : UIView

@property (retain, nonatomic) WCFinderCommentDetailAvatarUpdateInfo *info;
@property (retain, nonatomic) WCFinderHeadImageView *activeAvatar;
@property (retain, nonatomic) WCFinderHeadImageView *wechatAvatar;
@property (retain, nonatomic) WCFinderHeadImageView *finderAvatar;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (readonly, nonatomic) unsigned long long currentAvatarIdentity;
@property (copy, nonatomic) id /* block */ didTapAvatarViewAction;

- (void)layoutSubviews;
- (void)updateWithInfo:(id)a0;
- (void)didTapAvatarView:(id)a0;
- (void)__flipViewAnimationWithFromView:(id)a0 toView:(id)a1;
- (id)__createHeadImageView;
- (void).cxx_destruct;

@end
