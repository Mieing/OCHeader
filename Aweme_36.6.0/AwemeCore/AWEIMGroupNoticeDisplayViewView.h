@class AWEIMTextSelectable, UIView, NSString, UITextView, UIButton, YYLabel, AWEIMGroupNoticeDisplayViewModel, AWEIMMessageConversation, UILabel;

@interface AWEIMGroupNoticeDisplayViewView : UIView <AWEIMTextSelectableDelegate>

@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIButton *avatarButton;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *updateTimeLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UITextView *contentTextView;
@property (retain, nonatomic) UILabel *subContentLabel;
@property (retain, nonatomic) UIView *multiAvatarView;
@property (nonatomic) BOOL noticeScrollable;
@property (nonatomic) BOOL useLinkLabel;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) AWEIMGroupNoticeDisplayViewModel *viewModel;
@property (retain, nonatomic) AWEIMTextSelectable *textSelector;
@property (retain, nonatomic) YYLabel *linkLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEndTextSelectWithStartLocation:(struct CGPoint { double x0; double x1; })a0 lowLocation:(struct CGPoint { double x0; double x1; })a1 locationInView:(id)a2 tryStartLocationFirst:(BOOL)a3;
- (id)__updateContentLabelAutoLayoutWithoutBottomConstraints;
- (void)__showCopyMenuWithContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 startPointInScreen:(struct CGPoint { double x0; double x1; })a1 endPointInScreen:(struct CGPoint { double x0; double x1; })a2;
- (void)__copyContent:(id)a0;
- (void)handleTextViewTapGestureRecognizer:(id)a0;
- (void)__longPressedContentLabel:(id)a0;
- (struct CGSize { double x0; double x1; })noticeContentSize;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)setupUI;

@end
