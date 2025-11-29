@class AWEIMMessage, NSString, UIView, AWEIMMessagePropertyPendantView;

@interface AWEIMMessageEmoticonReplyPendantView : UIView <AWEIMMessagePropertyPendantViewDelegate, AWEIMMessagePropertyPendantGroupViewDelegate, AWEIMMessagePropertyPendantAddMoreEmojiViewDelegate, AWEIMEmojiReplyViewProtocol>

@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) AWEIMMessagePropertyPendantView *propertyPendantView;
@property (nonatomic) BOOL wrapped;
@property (nonatomic) BOOL isLightCameraMsg;
@property (nonatomic) BOOL sendFromMe;
@property (nonatomic) BOOL isDisplayingInRefactorCell;
@property (weak, nonatomic) UIView *cellContainerView;
@property (weak, nonatomic) UIView *loveHeartBtn;
@property (copy, nonatomic) id /* block */ didClickAdd;
@property (copy, nonatomic) id /* block */ didClickReplyView;
@property (copy, nonatomic) id /* block */ didClickReplyViewUser;
@property (copy, nonatomic) id /* block */ didClickReplyViewMoreUser;
@property (copy, nonatomic) id /* block */ didClickLoadMoreEmoji;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bubbleFrame;

- (void)configWithMessage:(id)a0;
- (void)propertyPendantView:(id)a0 preparePendantGroupView:(id)a1 viewModel:(id)a2;
- (void)propertyPendantView:(id)a0 preparePendantAddMoreEmojiView:(id)a1 viewModel:(id)a2;
- (void)didTappedFollowPropertyWithPendantGroupView:(id)a0;
- (void)didLongPressedWithPendantGroupView:(id)a0;
- (void)didTappedFollowPropertyWithAddMoreEmoticonLocation:(struct CGPoint { double x0; double x1; })a0 locationView:(id)a1;
- (void)p_setupUI;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clearContent;

@end
