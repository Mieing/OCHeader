@class WCFinderSizingRichTextView, UIImageView, WCFinderHeadImageView, UILabel, WCFinderAuthInfoIconView;

@interface WCFinderCommentSinglePreviewView : UIView

@property (retain, nonatomic) WCFinderHeadImageView *avatarView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) UIImageView *finderLogo;
@property (retain, nonatomic) UILabel *likeCount;
@property (retain, nonatomic) UIImageView *likeIcon;
@property (retain, nonatomic) WCFinderSizingRichTextView *commentView;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authInfoView;

- (id)initWithComment:(id)a0 limitContent:(BOOL)a1 maskType:(long long)a2 showReplyCnt:(BOOL)a3;
- (void)positionAndLayoutAttachment:(id)a0 preView:(id *)a1;
- (void)setComment:(id)a0;
- (void).cxx_destruct;

@end
