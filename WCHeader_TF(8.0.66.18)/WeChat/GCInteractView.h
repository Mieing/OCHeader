@class UIView, MMWebImageView, GCInteractCellModel, MMHeadImageView, UIButton, RichTextView, GCInteractBtmActioniew, UILabel, GCInteractFourAvatarView;

@interface GCInteractView : UIView

@property (retain, nonatomic) MMHeadImageView *headView;
@property (retain, nonatomic) GCInteractFourAvatarView *avatarGroupView;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UILabel *actionDescLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *actionTextLabel;
@property (retain, nonatomic) UILabel *quotoLabel;
@property (retain, nonatomic) UIView *qutoLineView;
@property (retain, nonatomic) MMWebImageView *rightImgView;
@property (retain, nonatomic) UIButton *rightFollowBtn;
@property (retain, nonatomic) GCInteractBtmActioniew *btmActionView;
@property (weak, nonatomic) GCInteractCellModel *bindCellModel;
@property (retain, nonatomic) RichTextView *actionRichTextView;
@property (retain, nonatomic) RichTextView *quotoRichTextView;
@property (retain, nonatomic) UILabel *wechatNickLabel;
@property (retain, nonatomic) UILabel *markLabel;
@property (retain, nonatomic) UILabel *titleLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleHeadTap;
- (void)didClickFollowBtn;
- (void)handleFollow;
- (void)didClickVoteBtn;
- (void)handleVote;
- (void)didClickReplyBtn;
- (void)didClickJumpAllBtn;
- (id)removeEmPrefix:(id)a0;
- (void)configureWithCellModel:(id)a0;
- (id)colorFromColorStr:(id)a0;
- (void)configureTitleRightLabel:(id)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 withSpace:(double)a2 subviewMaxWidth:(double)a3 maxRight:(double)a4 fromLeft:(double)a5;
- (void)configureBtmActionView:(id)a0;
- (void).cxx_destruct;

@end
