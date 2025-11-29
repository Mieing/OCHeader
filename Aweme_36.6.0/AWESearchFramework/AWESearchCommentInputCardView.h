@class AWEAIOriginalPageContext, UIViewController, UIImageView, AWEBinding, UIView, UILabel, YYLabel;
@protocol AWEAIOriginalContainerViewControllerProtocol;

@interface AWESearchCommentInputCardView : AWESearchCachalotBaseCardView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) YYLabel *inputLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIView *commentInputView;
@property (retain, nonatomic) UIImageView *albumIcon;
@property (retain, nonatomic) UIImageView *atIcon;
@property (retain, nonatomic) UIImageView *emojiIcon;
@property (weak, nonatomic) AWEBinding *avatarBinding;
@property (retain, nonatomic) AWEBinding *commentTextBinding;
@property (weak, nonatomic) AWEAIOriginalPageContext *pageContext;
@property (weak, nonatomic) UIViewController<AWEAIOriginalContainerViewControllerProtocol> *containerVC;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void)clickAvatar;
- (void)clickInputLabel;
- (void)clickAlbum;
- (void)clickAt;
- (void)clickEmoji;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)componentView;
- (void)setupUI;
- (id)placeholderString;

@end
