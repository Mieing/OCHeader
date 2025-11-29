@class UITextView, NSString, UIImageView, UILabel;

@interface IESLiveChatChannelListChatCell : IESLiveChatChannelBaseCell <IESLiveMessageListCellTapTextProtocol>

@property (retain, nonatomic) UITextView *contentTextView;
@property (retain, nonatomic) UILabel *userLabel;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *avatarBorderView;
@property (retain, nonatomic) UIImageView *emojiContentView;
@property (retain, nonatomic) UIImageView *blurContentView;
@property (retain, nonatomic) UIImageView *blurAvatarView;
@property (retain, nonatomic) UIImageView *blurUserLabelView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attributedTextWithString:(id)a0;
- (void)refreshWith:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertTextViewRectToCell:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)blurForCell;
- (void)avatarLongPress:(id)a0;
- (void)avatarSingleTap:(id)a0;
- (void)addBlurFilterToView:(id)a0 placeholderImageView:(id)a1;
- (void)longPress:(id)a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)selectionRectsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)prepareForReuse;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)loadView;

@end
