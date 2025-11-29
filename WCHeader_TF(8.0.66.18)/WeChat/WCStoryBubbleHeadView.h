@class UILabel, UIView, NSString, MMHeadImageView, WCStoryComment, MMCPLabel, RichTextView, UIVisualEffectView, MMUIButton, MMImageView;
@protocol WCStoryBubbleHeadViewDelegate;

@interface WCStoryBubbleHeadView : MMUIView <IWCMyStoryUserStateUtilExt, MMTipsViewControllerDelegate>

@property (retain, nonatomic) MMImageView *unreadVideoMarkView;
@property (nonatomic) BOOL hasUnreadVideoMark;
@property (nonatomic) BOOL functionBtnHidden;
@property (weak, nonatomic) MMUIButton *deleteBtn;
@property (weak, nonatomic) MMUIButton *replyBtn;
@property (weak, nonatomic) UIVisualEffectView *blurEffectView;
@property (weak, nonatomic) UILabel *colonLabel;
@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) RichTextView *commentLabel;
@property (retain, nonatomic) MMCPLabel *usernameLabel;
@property (retain, nonatomic) MMUIButton *backGroundView;
@property (retain, nonatomic) UIView *unreadColorView;
@property (weak, nonatomic) id<WCStoryBubbleHeadViewDelegate> delegate;
@property (retain, nonatomic) WCStoryComment *comment;
@property (nonatomic) BOOL isUnread;
@property (nonatomic) BOOL shouldShowUnreadVideoMark;
@property (nonatomic) BOOL userForBubbleAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForComment:(id)a0;
+ (id)displayContentOfComment:(id)a0;

- (void)configblurEffectView;
- (void)configUnreadColorView;
- (void)configHeadView;
- (void)configUnreadVideoMarkView;
- (void)configUsernameLabelWithMaxWidth:(double)a0;
- (void)configCommentLabelWithMaxWidth:(double)a0;
- (void)configDeleteBtn;
- (void)configReplyBtn;
- (id)getUserLabelText;
- (void)updateUnreadVideoMark;
- (void)updateVoiceOverState;
- (void)reloadView;
- (void)clickToShowCommentList;
- (double)getHeaderBlurEffectViewCornerRadius;
- (void)setRightFunctionalBtnHidden:(BOOL)a0;
- (void)updateFunctionalBtnState;
- (void)onHeadImageViewDoubleClick:(id)a0;
- (void)onHeadImageViewClick:(id)a0;
- (void)onBlurEffectViewDidClick;
- (void)onDeleteBtnDidClick:(id)a0;
- (void)onReplyBtnDidClick:(id)a0;
- (id)getHeadImageViewMaskLayer;
- (id)getBlurEffectViewMaskLayer;
- (void)onSetUnreadStoryMarkWithUserName:(id)a0;
- (void)onClearUnreadStoryMarkWithUserName:(id)a0;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
