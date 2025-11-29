@class AWEIMEncryptedImageMessage, UIVisualEffectView, UIImageView, UIView, UILabel, NSString;

@interface AWEIMFeedIronManAnchorBubbleView : UIView <AWEIMFeedIronManAnchorBubbleViewProtocol>

@property (retain, nonatomic) AWEIMEncryptedImageMessage *imageMessage;
@property (retain, nonatomic) UIView *backgroundMaskView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIImageView *iconView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackShow;
- (id)getContainerView;
- (void)configWithMessage:(id)a0;
- (void)__didclickBubble;
- (id)__buildContext;
- (void)configTitleWithAnchorModel:(id)a0;
- (id)p_trackGameCardParams;
- (void).cxx_destruct;
- (id)init;

@end
